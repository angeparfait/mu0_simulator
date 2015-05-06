#-------------------------------------------------
#
# Project created by QtCreator 2015-05-01T20:34:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Mu0
TEMPLATE = app


SOURCES += main.cpp\
        mu0.cpp \
    apprendre.cpp \
    test.cpp \
    aide.cpp

HEADERS  += mu0.h \
    apprendre.h \
    test.h \
    aide.h

FORMS    += mu0.ui \
    apprendre.ui \
    test.ui \
    aide.ui

RESOURCES += \
    schema.qrc \
    lda.qrc \
    mu01.qrc
