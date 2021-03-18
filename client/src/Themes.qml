pragma Singleton

import QtQuick 2.4


QtObject {
    id: __theme

    property bool isClassic: false
    property string back: !isClassic ? "#25493d" : "#80808F"
    property string font: !isClassic ? "#7ad4b2" : "grey"
    property string font_: !isClassic ? "#7ad4b2" : "white"
    property string primary: !isClassic ? "#052d1f" : "#80808F"
    property string accent: !isClassic ? "#002527" : "#7D7F8E"
    property string task: !isClassic ? "#02170a" : "#fbfaf6"
    property string gradienter: !isClassic ? "#25493d" : "#80808F"
    property string backBack: !isClassic ? "#25493d" : "#e4e1e0"
    property string headerBack: !isClassic ? "#095d40" : "#5a585c"
    property string addTask: !isClassic ? "#85e9c3" : "#5a585c"
    property string addTaskFont: !isClassic ? "white" : "white"
    property string listBack: !isClassic ? "#03271b" : "#8b8da0"
    property string overlay: !isClassic ? "#3085e9c3" : "#308b8da0"
    property string slider: !isClassic ? "#85e9c3" : "#805a585c"
    property string sliderHover: !isClassic ? "#85e9c3" : "#5a585c"
    property string sliderMain: !isClassic ? "#85e9c3" : "#405a585c"
    property string sliderMainHover: !isClassic ? "#85e9c3" : "#805a585c"
    property string desk: !isClassic ? "#14382c" : "#f5f2f1"

    property string infoHeader: !isClassic ? "#095d40" : "#f05a585c"
    property string infoHeaderFont: !isClassic ? "#85e9c3" : "white"
    property string infoBack: !isClassic ? "#14382c" : "#f08B8D96"
    property string infoUserBack: !isClassic ? "#052d1f" : "#E7E6E2"
    property string infoUserFont: !isClassic ? "#85e9c3" : "#5a585c"

    property string buttonBorder: !isClassic ? "#095d40" : "#E7E6E2"
    property string buttonBack: !isClassic ? "#052d1f" : "#5a585c"
    property string buttonBackHover: !isClassic ? "#002527" : "#8b8da0"
    property string buttonFont: !isClassic ? "#85e9c3" : "white"

    property string inputBorder: !isClassic ? "#095d40" : "#5a585c"
    property string inputBack: !isClassic ? "#052d1f" : "#5a585c"
    property string inputBackHover: !isClassic ? "#002527" : "#8b8da0"
    property string inputFont: !isClassic ? "#85e9c3" : "white"
    function changeTheme() {
        isClassic = !isClassic
    }
}
