QT += core
QT -= gui

CONFIG += c++11

TARGET = HomeDevices
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    device.cpp \
    leakDetector.cpp \
    temperatureDetector.cpp \
    smokeDetector.cpp

HEADERS += \
    device.h \
    smokeDetector.h \
    leakDetector.h \
    temperatureDetector.h
