TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    operation.cpp \
    strategy.cpp \
    plus.cpp \
    minus.cpp

HEADERS += \
    operation.h \
    strategy.h \
    plus.h \
    minus.h
