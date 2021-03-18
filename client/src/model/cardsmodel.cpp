#include "workflow.h"
#include "cardsmodel.h"


CardsModel::CardsModel(QObject *parent, int parentID)
    : QAbstractListModel(parent), m_parentId(parentID)
{
//    connect(this, &CardsModel::taskAppended, PARENT_CAST(CardListsModel, parent), &CardListsModel::taskAppended);
}

QVariant CardsModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return QVariant();
}

bool CardsModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant &value, int role)
{
    if (value != headerData(section, orientation, role)) {
        emit headerDataChanged(orientation, section, section);
        return true;
    }
    return false;
}

int CardsModel::rowCount(const QModelIndex &parent) const
{
    if (parent.isValid())
        return 0;
    return m_cards.size();
}

QVariant CardsModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if (role == TitleRole)
        return m_cards[index.row()].getTitle();
    if (role == IdRole)
        return m_cards[index.row()].getId();
    if (role == ParentIdRole) {
        return m_parentId;
    }
    return QVariant();
}

bool CardsModel::setData(const QModelIndex &index, const QVariant &value, int role)
{
    if (data(index, role) != value) {
        if (role == TitleRole)
            m_cards[index.row()].setTitle(value.toString());
        if (role == IdRole)
            m_cards[index.row()].setId(value.toInt());
        if (role == ParentIdRole)
            m_cards[index.row()].setListId(m_parentId);
        emit dataChanged(index, index, QVector<int>() << role);
        return true;
    }
    return false;
}

Qt::ItemFlags CardsModel::flags(const QModelIndex &index) const
{
    if (!index.isValid())
        return Qt::NoItemFlags;

    return Qt::ItemIsEditable; // FIXME: Implement me!
}

bool CardsModel::insertRows(int row, int count, const QModelIndex &parent)
{
    // request to insert Cards
    beginInsertRows(parent, row, row + count - 1);
    Card newCard{this};
    m_cards.insert(row, count, newCard);
    endInsertRows();
    return /*response is true*/count < rowCount();
}

bool CardsModel::append(const QString &title, int id, int parentID)
{

    insertRows(rowCount(), 1);
    setData(createIndex(rowCount() - 1, 0), title, TitleRole);
    setData(createIndex(rowCount() - 1, 0), id, IdRole);
    setData(createIndex(rowCount() - 1, 0), parentID, ParentIdRole);

    emit taskAppended();
    qDebug() << "{}{}{} {}{}{} {}{}{} {}{}{} {}{}{} {}{}{}" << m_parentId;

//    m_parentId = parentID;
    return true;
}

bool CardsModel::removeRows(int row, int count, const QModelIndex &parent)
{
    // request to remove Cards
    beginRemoveRows(parent, row, row + count - 1);
    m_cards.remove(row, count);
    endRemoveRows();
    return /*response is true*/count < rowCount() || row < rowCount();
}

QHash<int, QByteArray> CardsModel::roleNames() const
{
    QHash<int, QByteArray> roleName;
    roleName[TitleRole] = "textCard";
    roleName[IdRole] = "idCard";
    roleName[ParentIdRole] = "idParent";
    return roleName;
}

int CardsModel::parentId() const {
    return m_parentId;
}

void CardsModel::setParentId(int id) {
    m_parentId = id;
}

std::shared_ptr<CardsModel> CardsModel::creatCardsModel(const QJsonObject &array, QObject *parent, int parentID) {
    std::shared_ptr<CardsModel> model = std::make_shared<CardsModel>(parent, parentID);
    for(const auto &t : array["tasks"].toArray()) {
        auto task = t.toObject();
        qDebug() << ")()()()()()()()()()9 Creating Tasks ID:" << parentID;
        model->append(task["title"].toString(), task["taskId"].toInt(), parentID);
    }
    return model;
}

Card *CardsModel::findById(int id, int *indx) {
    if (indx)
        (*indx) = 0;
    for (auto &card : m_cards) {
        if (card.getId() == id) {
            return &card;
        }
        if (indx)
            (*indx)++;
    }
    if (indx)
        *indx = -1;
    return nullptr;
}

bool CardsModel::append(const Card &card) {
    return append(card.getTitle(), card.getId(), card.getListId());
}

void CardsModel::removeById(int id) {
    int indx = 0;
    findById(id, &indx);
    removeRows(indx, 1);
}
