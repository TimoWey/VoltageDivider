#-------------------------------------------------
#
# Project created by QtCreator 2016-09-07T12:35:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VoltageDivider
TEMPLATE = app

SRC_PATH = ../src
RES_PATH = ../images

SOURCES += $$SRC_PATH/main.cpp\
    $$SRC_PATH/UserInputValidator.cpp \
    $$SRC_PATH/VoltageDivider.cpp \
    $$SRC_PATH/VoltageDividerWidget.cpp \
    $$SRC_PATH/EResistor.cpp \
    $$SRC_PATH/ESeries.cpp \
    $$SRC_PATH/ESeriesType.cpp

HEADERS  += \
    $$SRC_PATH/UserInputValidator.h \
    $$SRC_PATH/VoltageDivider.h \
    $$SRC_PATH/VoltageDividerWidget.h \
    $$SRC_PATH/EResistor.h \
    $$SRC_PATH/ESeries.h \
    $$SRC_PATH/IESeries.h

FORMS    += \
    $$SRC_PATH/voltagedividerwidget.ui

DISTFILES +=

RESOURCES += \
    $$RES_PATH/images.qrc
