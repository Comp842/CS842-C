cmake_minimum_required(VERSION 3.26)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        TestSuite1.c
        Timer.c
        Timer.h
        TestSuite1.h
        TestObject.c
        TestObject.h
        TestSuite2.c
        TestSuite2.h
        SimpleLinkedList.c
        SimpleLinkedList.h
        TestSuite3.c
        TestSuite3.h
)
