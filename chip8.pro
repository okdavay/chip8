TEMPLATE = app
CONFIG += c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    core.cpp \
    window.cpp \
    keyboards.cpp

HEADERS += \
    core.h \
    window.h \
    ikeyboardslot.h \
    keyboards.h \
    iwindow.h

LIBS += -L$$PWD/SFML-2.5.1/lib/ 

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio-d -lsfml-graphics-d -lsfml-main-d -lsfml-network-d -lsfml-window-d -lsfml-system-d

INCLUDEPATH += $$PWD/SFML-2.5.1/include
DEPENDPATH += $$PWD/SFML-2.5.1/include





