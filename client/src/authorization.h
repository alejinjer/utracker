#ifndef AUTHORIZATION_H
#define AUTHORIZATION_H

#include <QObject>

#include "requests.h"

class Authorization : public QObject
{
    Q_OBJECT

public:
    enum SignUpError {
        NO_ERR = 0,
        LOGIN_EX,
        MAIL_EX
    };
    Q_ENUMS(SignUpError)
    explicit Authorization(QObject *parent = nullptr);
    ~Authorization() = default;

    Q_INVOKABLE void signUpHandler(QString login, QString mail, QString password);
    Q_INVOKABLE void signInHandler(QString ident, QString password);

    void setRequest(AbstractRequest *request);

    void printStr(QString str);
    Q_INVOKABLE void setUserId(int id);

private slots:
    void parseResponseSignIn(bool valid, const QString &login = "", const QString &mail = "", int id = 0);

signals:
    void serverResponseSignIn(bool valid, const QString &login = "", const QString &mail = "", int id = 0);
    void serverResponseSignUp(int err, QString strErr);

private:
    AbstractRequest *m_request;

};

#endif // AUTHORIZATION_H
