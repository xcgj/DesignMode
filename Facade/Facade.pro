TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Stock.cpp \
    Realty.cpp \
    P2P.cpp \
    Investment.cpp \
    Facade.cpp \
    Nationaldebt.cpp

HEADERS += \
    Stock.h \
    Realty.h \
    P2P.h \
    Investment.h \
    Facade.h \
    Nationaldebt.h
