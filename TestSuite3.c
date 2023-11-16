//
// Created by Alexandru Bara on 2023-11-16.
//

#include "TestSuite3.h"
#include "SimpleLinkedList.h"
#include "Timer.h"
#include <stdio.h>
#include <stdlib.h>

void suite3_test1() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1;
    int numLoops = 100000000;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test2() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10;
    int numLoops = 10000000;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test3() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100;
    int numLoops = 1000000;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test4() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1000;
    int numLoops = 100000;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test5() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10000;
    int numLoops = 10000;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test6() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100000;
    int numLoops = 1000;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test7() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 1000000;
    int numLoops = 100;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test8() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 10000000;
    int numLoops = 10;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}

void suite3_test9() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int numObjects = 100000000;
    int numLoops = 1;

    SimpleLinkedList *firstElem;
    SimpleLinkedList *currElem;

    for (int i = 0; i < numLoops; i++) {
        firstElem = createSimpleLinkedList();
        currElem = firstElem;
        for (int j = 0; j < numObjects; j++) {
            SimpleLinkedList *nextElem = createSimpleLinkedList();
            setNext(currElem, nextElem);
            currElem = nextElem;
        }

        // Free the allocated memory
        destroySimpleLinkedList(firstElem);
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d linked lists to be created %d times: %f seconds\n", numObjects, numLoops, elapsedMillis);
}
