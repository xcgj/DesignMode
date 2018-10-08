TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    human.cpp \
    factory.cpp \
    childfactory.cpp \
    child.cpp \
    teenfactory.cpp \
    teen.cpp

HEADERS += \
    human.h \
    factory.h \
    childfactory.h \
    child.h \
    teenfactory.h \
    teen.h
