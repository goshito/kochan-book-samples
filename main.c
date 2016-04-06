/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 6, 2016, 11:13 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Chapter 9, Program 9.7, Illustrating Structures and Arrays
 */

// Program to illustrate structures and arrays

int main(int argc, char** argv) {
    int i;
    
    struct month {
        int numberOfDays;
        char name[3];
    };
    
    const struct month months[12] = {
    { 31, {'J', 'a', 'n'} },  { 28, {'F', 'e', 'b'} },
    { 31, {'M', 'a', 'r'} },  { 30, {'A', 'p', 'r'} },
    { 31, {'M', 'a', 'y'} },  { 30, {'J', 'u', 'n'} },
    { 30, {'J', 'u', 'l'} },  { 31, {'A', 'u', 'g'} },
    { 30, {'S', 'e', 'p'} },  { 31, {'O', 'c', 't'} },
    { 30, {'N', 'o', 'v'} },  { 31, {'D', 'e', 'c'} }
    };
    
    printf("Month   Number of Days\n");
    printf("-----   --------------\n");
    
    for (i = 0; i < 12; ++i)
        printf(" %c%c%c         %i\n",
                months[i].name[0], months[i].name[1],
                months[i].name[2], months[i].numberOfDays);

    return (EXIT_SUCCESS);
}

