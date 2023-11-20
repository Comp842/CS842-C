//
// Created by Alexandru Bara on 2023-11-16.
//

#include "TestSuite4.h"
#include "AdvancedLinkedList.h"
#include "Timer.h"
#include <stdio.h>
#include <stdlib.h>

void suite4_test1() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1;
    int numLoops = 100000000;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite4_test2() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10;
    int numLoops = 10000000;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite4_test3() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100;
    int numLoops = 1000000;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite4_test4() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1000;
    int numLoops = 100000;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite4_test5() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10000;
    int numLoops = 10000;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite4_test6() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100000;
    int numLoops = 1000;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite4_test7() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1000000;
    int numLoops = 100;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite4_test8() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10000000;
    int numLoops = 10;

    AdvancedLinkedList *firstElem;
    AdvancedLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createAdvancedLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            AdvancedLinkedList *nextElem = createAdvancedLinkedList();
            currElem->next = nextElem;
            currElem = nextElem;
        }

        // Free the allocated memory
        destroyAdvancedLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d Advanced linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}
