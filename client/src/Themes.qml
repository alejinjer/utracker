pragma Singleton

import QtQuick 2.4


QtObject {
    id: __theme

    property bool isClassic: true
    property string back: !isClassic ? "#dab6c2" : "#80808F" 
    property string font: !isClassic ? "#7a163c" : "#bc6ff1"
    property string font_: !isClassic ? "#7a163c" : "white"

    // line above
    property string primary: !isClassic ? "#bc6ff1" : "#1f1b24"

    property string accent: !isClassic ? "#bc6ff1" : "#bc6ff1"
    
    property string task: !isClassic ? "#fde8f5" : "#fbfaf6"
    // background
    property string gradienter: !isClassic ? "#121212" : "#121212"

    property string backBack: !isClassic ? "#dab6c2" : white
    
    // cards background?
    property string headerBack: !isClassic ? "#80f6a2bf" : "#5a585c"
    property string addTask: !isClassic ? "#7a163c" : "#5a585c"
    property string addTaskFont: !isClassic ? "white" : "white"
    // left accents
    property string listBack: !isClassic ? "#fcd8e4" : "#1f1b24"

    property string overlay: !isClassic ? "#307a163c" : "#121212"
    property string slider: !isClassic ? "#407a163c" : "#805a585c"
    property string sliderHover: !isClassic ? "#807a163c" : "#5a585c"
    property string sliderMain: !isClassic ? "#407a163c" : "#405a585c"
    property string sliderMainHover: !isClassic ? "#807a163c" : "#805a585c"

    property string desk: !isClassic ? "#ebc7d3" : "#121212"

    //table info collaborators
    property string infoHeader: !isClassic ? "#bc6ff1" : "#bc6ff1"
    property string infoHeaderFont: !isClassic ? "#7a163c" : "white"
    //table info
    property string infoBack: !isClassic ? "#bc6ff1" : "#bc6ff1"

    property string infoUserBack: !isClassic ? "#fad2e0" : "#1f1b24"
    property string infoUserFont: !isClassic ? "#7a163c" : "#5a585c"

    property string buttonBorder: !isClassic ? "#f6a2bf" : "#52057b"
    property string buttonBack: !isClassic ? "#fad2e0" : "#bc6ff1"
    property string buttonBackHover: !isClassic ? "#ffdad8" : "#892cdc"
    property string buttonFont: !isClassic ? "#7a163c" : "#52057b"

    property string inputBorder: !isClassic ? "#f6a2bf" : "#5a585c"
    property string inputBack: !isClassic ? "#fad2e0" : "#5a585c"
    property string inputBackHover: !isClassic ? "#ffdad8" : "#8b8da0"
    property string inputFont: !isClassic ? "#7a163c" : "white"
    function changeTheme() {
        isClassic = !isClassic
    }
}


