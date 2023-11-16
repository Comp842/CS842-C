//
// Created by Alexandru Bara on 2023-11-15.
//

#ifndef UNTITLED_TESTOBJECT_H
#define UNTITLED_TESTOBJECT_H

struct TestObject {
    int integerVariable;
    double doubleVariable;
    _Bool booleanVariable;
    char charVariable;
    char* stringVariable;
    int* integerArray;
    void* objectVariable;
    long longVariable;
    float floatVariable;
    char byteVariable;
    short shortVariable;
};

void createAndDiscardObjects(int numObjects);

#endif //UNTITLED_TESTOBJECT_H
