/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 11, 2016, 12:45 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Chapter 10, Program 10.2, Counting the Characters in a String
 */

// Function to count the number of characters in a string

int stringLength(const char string[]) {
    
    int count = 0;
    
    while (string[count] != '\0')
        ++count;
    
    return count;
}

int main(int argc, char** argv) {
    
    int stringLength(const char string[]);
    const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
    const char word2[] = {'a', 't', '\0'};
    const char word3[] = {'a', 'w', 'e', '\0'};
    
    printf("%i  %i  %i\n", stringLength(word1), stringLength(word2), stringLength(word3));

    return (EXIT_SUCCESS);
}

