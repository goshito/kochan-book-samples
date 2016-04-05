/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 5, 2016, 6:40 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Program 9.3, Revising the Program to Determine Tomorow's Date
 */

// Program to determine tomorow's date

struct date {
    int month;
    int day;
    int year;
};

int main(int argc, char** argv) {
    struct date today, tomorow;
    int numberOfDays(struct date d);
    
    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &today.month, &today.day, &today.year);
    
    if (today.day != numberOfDays(today)) {
        tomorow.day = today.day + 1;
        tomorow.month = today.month;
        tomorow.year = today.year;
    } else if (today.month == 12) {    //end of year
        tomorow.day = 1;
        tomorow.month = 1;
        tomorow.year = today.year + 1;
    } else {                           // end of month
        tomorow.day = 1;
        tomorow.month = today.month + 1;
        tomorow.year = today.year;
    }
    
    printf("Tomorow's date is %i/%i/%.2i. \n", tomorow.month, tomorow.day, tomorow.year % 100);
    
    return (EXIT_SUCCESS);
}
    
    // Function to find the number of days in a month
    
int numberOfDays(struct date d) {
    int days;
    bool isLeapYear(struct date d);
    const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if (isLeapYear(d) == true && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];
        
    return days;
}
    
// Function to determine if it's a leap year
    
bool isLeapYear(struct date d) {
    bool leapYearFlag;
        
    if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
        leapYearFlag = true;    // It's a leap year
    else
        leapYearFlag = false;   // Not a leap year

    return leapYearFlag;
}

