QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addtask.cpp \
    addtask2.cpp \
    addtask3.cpp \
    addtask4.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    addtask.h \
    addtask2.h \
    addtask3.h \
    addtask4.h \
    mainwindow.h

FORMS += \
    addtask.ui \
    addtask2.ui \
    addtask3.ui \
    addtask4.ui \
    mainwindow.ui

TRANSLATIONS += \
    toDoList_en_IN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resources.qrc
