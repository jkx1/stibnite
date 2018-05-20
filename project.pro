# Stibnite project file
# Copyright (c) 2018 Jan Kowalewicz.

QT += core gui widgets network opengl
TARGET = stibnite

# !!!INFO!!! => s2lang is going to be an own project soon!

SOURCES += sb2s3/main.cpp \
			sb2s3/translate.cpp \
			sb2s3/s2lang/s2object.cpp
			
HEADERS += sb2s3/translate.h \
			sb2s3/s2lang/s2object.h
