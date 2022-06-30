TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Person.cpp \
        add_system.cpp \
        clear_system.cpp \
        del_system.cpp \
        exit_system.cpp \
        file.cpp \
        find_system.cpp \
        info.cpp \
        jobs.cpp \
        main.cpp \
        show_system.cpp \
        update_system.cpp

HEADERS += \
    Person.h \
    jobs.h \
    myhead.h
