QT += core
QT -= gui

CONFIG += c++11

TARGET = fieldOverShadowing
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    child.cpp \
    father.cpp \
    mother.cpp

HEADERS += \
    mother.h \
    father.h \
    child.h
