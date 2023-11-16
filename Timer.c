//
// Created by Alexandru Bara on 2023-11-15.
//

#include "Timer.h"



// Function to start the timer
void startTimer(Timer *timer) {
    clock_gettime(CLOCK_MONOTONIC, &(timer->start_time));
}

// Function to get the elapsed time in seconds
double getTimeSeconds(Timer *timer) {
    struct timespec end_time;
    clock_gettime(CLOCK_MONOTONIC, &end_time);

    long elapsedNanos = (end_time.tv_sec - timer->start_time.tv_sec) * 1000000000 + (end_time.tv_nsec - timer->start_time.tv_nsec);
    return elapsedNanos / 1000000000.0;
}
