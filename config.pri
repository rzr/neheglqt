#QT+=opengl

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/bin
    } else {
#       target.path = /usr/bin
        data.path=/opt/org.gitorious.user.rzr.neheglqt/
        target.path = /opt/org.gitorious.user.rzr.neheglqt/
    }
    INSTALLS += target data
}
