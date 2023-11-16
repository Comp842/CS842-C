//
// Created by Alexandru Bara on 2023-11-15.
//

#include "Timer.h"
#include "TestObject.h"
#include <stdio.h>

void test1() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    // Number of objects to create
    int numObjects = 1;
    int numLoops = 1000000000;

    // Run loop 10 times
    for (int i = 0; i < numLoops; i++) {
        createAndDiscardObjects(numObjects);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d objects to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void test2() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    // Number of objects to create
    int numObjects = 100;
    int numLoops = 10000000;

    // Run loop 10 times
    for (int i = 0; i < numLoops; i++) {
        createAndDiscardObjects(numObjects);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d objects to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void test3() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    // Number of objects to create
    int numObjects = 10000;
    int numLoops = 100000;

    // Run loop 10 times
    for (int i = 0; i < numLoops; i++) {
        createAndDiscardObjects(numObjects);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d objects to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void test4() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    // Number of objects to create
    int numObjects = 100000;
    int numLoops = 10000;

    // Run loop 10 times
    for (int i = 0; i < numLoops; i++) {
        createAndDiscardObjects(numObjects);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d objects to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void test5() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    // Number of objects to create
    int numObjects = 1000000;
    int numLoops = 1000;

    // Run loop 10 times
    for (int i = 0; i < numLoops; i++) {
        createAndDiscardObjects(numObjects);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d objects to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void test6() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    // Number of objects to create
    int numObjects = 10000000;
    int numLoops = 100;

    // Run loop 10 times
    for (int i = 0; i < numLoops; i++) {
        createAndDiscardObjects(numObjects);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d objects to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void test7() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    // Number of objects to create
    int numObjects = 1000000000;
    int numLoops = 1;

    // Run loop 10 times
    for (int i = 0; i < numLoops; i++) {
        createAndDiscardObjects(numObjects);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d objects to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}