/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 5, 2016, 2:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Program 9.2
 */

// Program to determine tomorrow's date

int main(int argc, char** argv) {
    struct date {
        int month;
        int day;
        int year;
    };
    
    struct date today, tomorow;
    
    const int daysPerMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    printf("Enter today's date (mm dd yyyy: ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);
    
    if (today.day != daysPerMonths[today.month - 1]) {
        tomorow.day = today.day + 1;
        tomorow.month = today.month;
        tomorow.year = today.year;
    } else if (today.month == 12) {      // end of year
        tomorow.day = 1;
        tomorow.month = 1;
        tomorow.year = today.year + 1;
    }
    else {
        tomorow.day = 1;
        tomorow.month = today.month + 1;
        tomorow.year = today.year;
    }
    
    printf("Tomorow's date is %i/%i/%.2i\n", tomorow.month, tomorow.day, tomorow.year%100);

    return (EXIT_SUCCESS);
}

