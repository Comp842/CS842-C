//
// Created by Alexandru Bara on 2023-11-15.
//

#ifndef UNTITLED_TIMER_H
#define UNTITLED_TIMER_H

#include <time.h>
typedef struct {
    struct timespec start_time;
} Timer;

void startTimer(Timer *timer);
double getTimeSeconds(Timer *timer);

#endif //UNTITLED_TIMER_H
