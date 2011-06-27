#! /usr/bin/qmake-qt4

TEMPLATE = subdirs
SUBDIRS = ch2 ch3 ch4 ch5 ch6 ch7 ch8 ch9 ch10 ch11 ch12 

OTHERDIRS= images

include(config.pri)

data+=data
data.path=$$target.path/
data.files += images/*.bmp **/*.txt COPYING README *.txt *.sh

desktopfile.files = $${TARGET}.desktop

INSTALLS += data
