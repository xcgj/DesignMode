TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Interface.cpp \
    Individual.cpp \
    Proxy.cpp \
    Destination.cpp

HEADERS += \
    Interface.h \
    Individual.h \
    Proxy.h \
    Destination.h
