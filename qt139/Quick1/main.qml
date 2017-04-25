import QtQuick 2.3
import QtQuick.Window 2.2

Window {
    visible: true
    width: 500
    height: 500

    Rectangle {
        width: 50
        height: 50
        color: "#ff0000"
        border.color:  "#000000"
        border.width: 4
    }

    Rectangle {
        width: 200
        height: 200
        color: "#ff0000"
        border.color:  "#000000"
        border.width: 4


        anchors.centerIn: parent
        Rectangle {
            width: parent.width / 2
            height: parent.height /2
            radius: width *  0.5

            color: "green"
            border.color:  "white"
            border.width: 4
            anchors.left: parent.left
            anchors.bottom: parent.bottom
        }

    }


}
