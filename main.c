/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 6, 2016, 10:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Chapter 9, Program 9.6, Illustrating Arrays of Structures
 */

// Program to illustrate arrays of structures

struct time {
    int hour;
    int minutes;
    int seconds;
};

int main(int argc, char** argv) {
    struct time timeUpdate(struct time now);
    struct time testTimes[5] = 
        { {11, 59, 59}, {12, 0, 0}, {1, 29, 59},
        {23, 59, 59}, {19, 12, 27} };
    int i;
    
    for (i = 0; i < 5; ++i) {
        printf("Time is %.2i:%.2i:%.2i", testTimes[i].hour,
                testTimes[i].minutes, testTimes[i].seconds);
        
        testTimes[i] = timeUpdate(testTimes[i]);
        
        printf(" ...one second later it's %.2i:%.2i:%.2i\n",
            testTimes[i].hour, testTimes[i].minutes, testTimes[i].seconds);
    }    

    return (EXIT_SUCCESS);
}

// Function to update time by one second

struct time timeUpdate(struct time now) {
    ++now.seconds;
    
    if (now.seconds == 60) {        // next minute
        now.seconds = 0;
        ++now.minutes;
        
        if (now.minutes == 60) {    // next hour
            now.minutes = 0;
            ++now.hour;
            
            if (now.hour == 24) {   // midnight
                now.hour = 0;
            }
        }
    }
    
    return now;
}

