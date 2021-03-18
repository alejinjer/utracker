import QtQuick 2.15
import QtQuick.Window 2.11
import QtQuick.Controls 1.3 as Controls
import QtQuick.Controls 2.15
import Material 0.3
import Material.ListItems 0.1 as ListItem
import QtQuick.Layouts 1.3

Page {

    function createNewDesk() {
        console.log("Request to create new desk");
        console.log("!!!!!" + (rootAccount.height - userSection.count * (48 * Units.dp + 3) - dp(200)))
        desksSection.append({title: "Desk " + (desksSection.count + 1), idNum: desksSection.count + 1})
        control.position = 1.0
//        sectionItems.model.dataChanged()
    }

    ListModel {
        id: userSection
        ListElement {
            title: "Profile"
            idNum: 0
        }
    }
    ListModel {
        id: desksSection
        ListElement {
            title: "Desk 1"
            idNum: 1
        }
        ListElement{
            title: "Desk 2"
            idNum: 2
        }
        ListElement{
            title: "Desk 3"
            idNum: 3
        }
        ListElement{
            title: "Desk 4"
            idNum: 4
        }
    }
    property var sections: [userSection, desksSection]
    property var sectionsTitles: ["User information", "Desks"]
    property var selectedComponent: undefined
//    property bool isListContentHeight: true

    id: rootAccount
    visible: true
    width: dp(1920)
    height: dp(1080)

    title: "uTracker"
    backgroundColor: "#dab6c2"
    actionBar.decorationColor:"#7a163c"
    actions: [
        Action {
            id: info
            iconName: "navigation/menu"
            text: "Info"
            hoverAnimation: false
            onTriggered: {
                sidebarInfo.showing = !sidebarInfo.showing
            }
        }
    ]


    rightSidebar: InfoSidebar {
        id: sidebarInfo
    }
    backAction: navDrawer.action
    NavigationDrawer {
        id: navDrawer

        enabled: true

        overlayColor: "#307a163c"
        onEnabledChanged: smallLoader.active = enabled

        Flickable {
            anchors.fill: parent

            contentHeight: Math.max(content.implicitHeight, height)

            Column {
                id: content
                anchors.fill: parent

                Repeater {
                    model: sections

                    delegate: Column {
                        width: parent.width

                        ListItem.Subheader {
                            text: sectionsTitles[index]
                            textColor:"#7a163c"
                            showDivider: true
                            elevation: 1
                        }

                        ListView {
                            id: sectionItems

                            width: parent.width
                            clip: true
                            property bool isContentHeight: contentHeight < (rootAccount.height - (userSection.count  + 3) * dp(48) - dp(200))
                            height: isContentHeight ? contentHeight
                                    : (rootAccount.height - (userSection.count  + 3) * dp(48) - dp(200))
                            model: sections[index]
                            interactive: false
                            flickableDirection: Flickable.VerticalFlick
                            boundsBehavior: Flickable.StopAtBounds
                            ScrollBar.vertical: ScrollBar{
                                property real globalPos: control.position * sectionItems.contentHeight
                                id: control
                                hoverEnabled: true
                                active: sectionItems.height < sectionItems.contentHeight && (hovered || pressed)
                                size: 0.3
                                contentItem: Rectangle {
                                        implicitWidth: 3
                                        implicitHeight: 100
                                        radius: width / 2
                                        color: !(sectionItems.height < sectionItems.contentHeight) ? "#007a163c" :
                                                                 (control.pressed || control.hovered ? "#807a163c" : "#407a163c")
                                }
                            }
                            delegate: ListItem.Standard {
                                text: model.title
//                                selected: model.idNum === selectedComponent.idNum
                                onClicked: {
//                                    selectedComponent = model
//                                    console.log(model.title)
                                    navDrawer.close()
                                }
                            }
                        }
                    }
                }
                Button {
                    text: "New desk +"
//                    elevation: sectionItems.isContentHeight ? 1 : 0
                    elevation: 1
                    height: dp(40)
                    width: parent.width
                    onClicked: createNewDesk();
                }
            }
        }
    }

    Item {
        anchors.fill: parent
        Flickable {
            id: flickable
            anchors.fill: parent
            clip: true
            contentHeight: Math.max(example.implicitHeight + 40, height)
            Loader {
                id: example
                anchors.fill: parent
                asynchronous: true
                visible: status == Loader.Ready
                // selectedComponent will always be valid, as it defaults to the first component
                source: {
                        return Qt.resolvedUrl("DeskItem.qml")
                }
            }

            ProgressCircle {
                anchors.centerIn: parent
                visible: example.status == Loader.Loading
            }
        }
        Scrollbar {
            flickableItem: flickable
        }
    }



    Snackbar {
        id: snackbar
    }
}
