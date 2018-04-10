#-------------------------------------------------
#
# Project created by QtCreator 2018-03-29T15:54:31
#
#-------------------------------------------------

QT       += core gui
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AbbRosI-Intg-Asst
TEMPLATE = app


SOURCES += main.cpp\
        asstmainwindow.cpp \
    dialog_pkg_support.cpp \
    dialog_generate_urdf.cpp

HEADERS  += asstmainwindow.h \
    dialog_pkg_support.h \
    dialog_generate_urdf.h

FORMS    += asstmainwindow.ui \
    dialog_pkg_support.ui \
    dialog_generate_urdf.ui

RESOURCES += \
    style.qrc \
    image.qrc
