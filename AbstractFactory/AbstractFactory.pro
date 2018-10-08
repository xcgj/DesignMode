TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    factory.cpp \
    child.cpp \
    teen.cpp \
    humanchild.cpp \
    alienchild.cpp \
    humanteen.cpp \
    alienteen.cpp \
    alienfactory.cpp \
    humanfactory.cpp

HEADERS += \
    factory.h \
    child.h \
    teen.h \
    humanchild.h \
    alienchild.h \
    humanteen.h \
    alienteen.h \
    alienfactory.h \
    humanfactory.h
