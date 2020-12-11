include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread

HEADERS += \
        tst_tc1.h \
        ../VoltageDividerSource/src/UserInputValidator.h

SOURCES += \
        main.cpp \
        ../VoltageDividerSource/src/UserInputValidator.cpp
