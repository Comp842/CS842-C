//
// Created by Alexandru Bara on 2023-11-15.
//

#include "TestObject.h"
#include <stdlib.h>
#include <stdio.h>


// Function to create and discard short-lived objects (young generation)
void createAndDiscardObjects(int numObjects) {

    struct TestObject* arrOfTestObj = (struct TestObject*) malloc(numObjects * sizeof(struct TestObject));

    // Create and discard short-lived objects (young generation)
    for (int j = 0; j < numObjects; j++) {
        // Initialize the individual TestObject
        arrOfTestObj[j%100000000].integerVariable = 0;
        arrOfTestObj[j%100000000].doubleVariable = 0.0;
        arrOfTestObj[j%100000000].booleanVariable = 0;
        arrOfTestObj[j%100000000].charVariable = '\0';
        arrOfTestObj[j%100000000].stringVariable = NULL;
        arrOfTestObj[j%100000000].integerArray = NULL;
        arrOfTestObj[j%100000000].objectVariable = NULL;
        arrOfTestObj[j%100000000].longVariable = 0L;
        arrOfTestObj[j%100000000].floatVariable = 0.0f;
        arrOfTestObj[j%100000000].byteVariable = 0;
        arrOfTestObj[j%100000000].shortVariable = 0;
    }

    // Free the memory allocated for the array of TestObjects
    free(arrOfTestObj);
}