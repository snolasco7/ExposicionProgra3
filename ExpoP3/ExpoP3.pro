#-------------------------------------------------
#
# Project created by QtCreator 2016-03-31T12:57:09
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExpoP3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    imagen.cpp \
    texto.cpp \
    sound.cpp \
    video.cpp

HEADERS  += mainwindow.h \
    imagen.h \
    texto.h \
    sound.h \
    video.h

FORMS    += mainwindow.ui \
    imagen.ui \
    texto.ui \
    sound.ui \
    video.ui
