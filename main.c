/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 6, 2016, 12:12 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Chapter 9, Program 9.5 Updating Time by One Second
 */

// Program to update the time by one second

struct time {
    int hour;
    int minutes;
    int seconds;
};

int main(int argc, char** argv) {
    struct time timeUpdate(struct time now);
    struct time currentTime, nextTime;
    
    printf("Enter the time (hh:mm:ss): ");
    scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);
    
    nextTime = timeUpdate(currentTime);
    
    printf("Updated time is %.2i.%.2i.%.2i\n", nextTime.hour, nextTime.minutes, nextTime.seconds);

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

