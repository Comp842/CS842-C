
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

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

void initializeAllDataTypes(struct TestObject* data) {
    data->integerVariable = 0;
    data->doubleVariable = 0.0;
    data->booleanVariable = 0;
    data->charVariable = '\0';
    data->stringVariable = NULL;
    data->integerArray = NULL;
    data->objectVariable = NULL;
    data->longVariable = 0;
    data->floatVariable = 0.0;
    data->byteVariable = 0;
    data->shortVariable = 0;
}


void test1(){
    // Number of pointer assignments to perform
    int num_assignments = 1000000000;

    // Create an integer variable and a pointer to it
    int value = 0;
    int *pointer = &value;

    // Start the timer
    clock_t start_time = clock();

    // Perform the pointer assignments
    for (int i = 0; i < num_assignments; i++) {
        *pointer = 42;
    }

    // Stop the timer and calculate the elapsed time
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the results
    printf("Time taken for %d pointer assignments: %f seconds\n", num_assignments, elapsed_time);

    // Create an integer variable and a pointer to it
    value = 0;

    // Start the timer
    start_time = clock();

    // Perform the pointer assignments
    for (int i = 0; i < num_assignments; i++) {
        value = 42;
    }

    // Stop the timer and calculate the elapsed time
    end_time = clock();
    elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the results
    printf("Time taken for %d pointer assignments: %f seconds\n", num_assignments, elapsed_time);
}

void test2(){
    // Start the timer
    clock_t start_time = clock();

    // Number of objects to allocate
    int numObjects = 1000000;
    // Run the loop 10 times
    for (int i = 0; i < 1000; i++) {
        struct TestObject* arrOfTestObj = (struct TestObject*)malloc(numObjects * sizeof(struct TestObject));

        // Create and discard short-lived objects (young generation)
        for (int j = 0; j < numObjects; j++) {
            // Initialize the individual TestObject
            arrOfTestObj[j].integerVariable = 0;
            arrOfTestObj[j].doubleVariable = 0.0;
            arrOfTestObj[j].booleanVariable = 0;
            arrOfTestObj[j].charVariable = '\0';
            arrOfTestObj[j].stringVariable = NULL;
            arrOfTestObj[j].integerArray = NULL;
            arrOfTestObj[j].objectVariable = NULL;
            arrOfTestObj[j].longVariable = 0L;
            arrOfTestObj[j].floatVariable = 0.0f;
            arrOfTestObj[j].byteVariable = 0;
            arrOfTestObj[j].shortVariable = 0;
        }

        // Free the memory allocated for the array of TestObjects
        free(arrOfTestObj);
    }


    // Stop the timer and calculate the elapsed time
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the results
    printf("Time taken for %d memory allocation and free: %f seconds\n", numObjects, elapsed_time);
}

void test3(){
    // Start the timer
    clock_t start_time = clock();

    // Number of objects to allocate
    int numObjects = 10000000;
    // Run the loop 10 times
    for (int i = 0; i < 100; i++) {
        struct TestObject* arrOfTestObj = (struct TestObject*)malloc(numObjects * sizeof(struct TestObject));

        // Create and discard short-lived objects (young generation)
        for (int j = 0; j < numObjects; j++) {
            // Initialize the individual TestObject
            arrOfTestObj[j].integerVariable = 0;
            arrOfTestObj[j].doubleVariable = 0.0;
            arrOfTestObj[j].booleanVariable = 0;
            arrOfTestObj[j].charVariable = '\0';
            arrOfTestObj[j].stringVariable = NULL;
            arrOfTestObj[j].integerArray = NULL;
            arrOfTestObj[j].objectVariable = NULL;
            arrOfTestObj[j].longVariable = 0L;
            arrOfTestObj[j].floatVariable = 0.0f;
            arrOfTestObj[j].byteVariable = 0;
            arrOfTestObj[j].shortVariable = 0;
        }

        // Free the memory allocated for the array of TestObjects
        free(arrOfTestObj);
    }


    // Stop the timer and calculate the elapsed time
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the results
    printf("Time taken for %d memory allocation and free: %f seconds\n", numObjects, elapsed_time);
}

void test4(){
    // Start the timer
    clock_t start_time = clock();

    int numObjects = 1000;

    for (int i = 0; i < 1000000; i++) {
        struct TestObject* arrOfTestObj = (struct TestObject*)malloc(numObjects * sizeof(struct TestObject));

        // Create and discard short-lived objects (young generation)
        for (int j = 0; j < numObjects; j++) {
            // Initialize the individual TestObject
            arrOfTestObj[j].integerVariable = 0;
            arrOfTestObj[j].doubleVariable = 0.0;
            arrOfTestObj[j].booleanVariable = 0;
            arrOfTestObj[j].charVariable = '\0';
            arrOfTestObj[j].stringVariable = NULL;
            arrOfTestObj[j].integerArray = NULL;
            arrOfTestObj[j].objectVariable = NULL;
            arrOfTestObj[j].longVariable = 0L;
            arrOfTestObj[j].floatVariable = 0.0f;
            arrOfTestObj[j].byteVariable = 0;
            arrOfTestObj[j].shortVariable = 0;
        }

        // Free the memory allocated for the array of TestObjects
        free(arrOfTestObj);
    }


    // Stop the timer and calculate the elapsed time
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the results
    printf("Time taken for %d memory allocation and free: %f seconds\n", numObjects, elapsed_time);
}

void test5(){
    // Start the timer
    clock_t start_time = clock();

    int numObjects = 1;

    for (int i = 0; i < 1000000000; i++) {
        struct TestObject* arrOfTestObj = (struct TestObject*)malloc(numObjects * sizeof(struct TestObject));

        // Create and discard short-lived objects (young generation)
        for (int j = 0; j < numObjects; j++) {
            // Initialize the individual TestObject
            arrOfTestObj[j].integerVariable = 0;
            arrOfTestObj[j].doubleVariable = 0.0;
            arrOfTestObj[j].booleanVariable = 0;
            arrOfTestObj[j].charVariable = '\0';
            arrOfTestObj[j].stringVariable = NULL;
            arrOfTestObj[j].integerArray = NULL;
            arrOfTestObj[j].objectVariable = NULL;
            arrOfTestObj[j].longVariable = 0L;
            arrOfTestObj[j].floatVariable = 0.0f;
            arrOfTestObj[j].byteVariable = 0;
            arrOfTestObj[j].shortVariable = 0;
        }

        // Free the memory allocated for the array of TestObjects
        free(arrOfTestObj);
    }


    // Stop the timer and calculate the elapsed time
    clock_t end_time = clock();
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;

    // Print the results
    printf("Time taken for %d memory allocation and free: %f seconds\n", numObjects, elapsed_time);
}

int main() {
//    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}
