/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 5, 2016, 1:44 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

// Program to illustrate a structure

int main(int argc, char** argv) {
    struct date {
        int month;
        int day;
        int year;
    };
    
    struct date today;
    
    today.month = 9;
    today.day = 25;
    today.year = 2004;
    
    printf("Today's date is %i/%i/%.2i", today.month, today.day, today.year % 100);

    return (EXIT_SUCCESS);
}

