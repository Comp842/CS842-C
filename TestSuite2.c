//
// Created by Alexandru Bara on 2023-11-16.
//

#include "TestSuite2.h"
#include "Timer.h"
#include <stdio.h>
#include <stdlib.h>

const int numAssignments = 1000000000;

void suite2_test1() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int value;

    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        value = i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d int assignments: %f seconds\n", numAssignments, elapsedMillis);
}

void suite2_test2() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int *ptr = 0;

    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        ptr = &i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d int pointer assignments: %f seconds\n", numAssignments, elapsedMillis);
}

void suite2_test3() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int *valueArr = (int *)malloc(numAssignments * sizeof(int));


    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        valueArr[i] = i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d int assignments stored in array:: %f seconds\n", numAssignments, elapsedMillis);
}

void suite2_test4() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    int **valueArr = (int **) malloc(numAssignments * sizeof(int *));


    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        valueArr[i] = &i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d int pointer assignments stored in array:: %f seconds\n", numAssignments, elapsedMillis);
}

void suite2_test5() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    double value;

    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        value = i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d double assignments: %f seconds\n", numAssignments, elapsedMillis);
}

void suite2_test6() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    double *ptr = 0;

    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        ptr = (double *) &i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d double pointer assignments: %f seconds\n", numAssignments, elapsedMillis);
}

void suite2_test7() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    double *valueArr = (double *)malloc(numAssignments * sizeof(double));


    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        valueArr[i] = i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d double assignments stored in array:: %f seconds\n", numAssignments, elapsedMillis);
}

void suite2_test8() {
    // Start the timer
    Timer timer;
    startTimer(&timer);

    double **valueArr = (double **) malloc(numAssignments * sizeof(double *));


    // Perform the assignments
    for (int i = 0; i < numAssignments; i++) {
        valueArr[i] = (double *) &i;
    }

    // Stop the timer and calculate the elapsed time
    double elapsedMillis = getTimeSeconds(&timer);

    // Print the results
    printf("Time taken for %d double pointer assignments stored in array:: %f seconds\n", numAssignments, elapsedMillis);
}