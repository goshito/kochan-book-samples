/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 11, 2016, 1:15 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Chapter 10, Program 10-4, Test Strings for Equality
 */

// Function to determine if two strings are equal

bool equalStrings(const char s1[], const char s2[]) {
    
    int i = 0;
    bool areEqual;
    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        ++i;
    
    if (s1[i] == '\0' && s2[i] == '\0')
        areEqual = true;
    else
        areEqual = false;
    
    return areEqual;
}

int main(int argc, char** argv) {
    
    bool equalStrings(const char s1[], const char s2[]);
    const char stra[] = "string compare test";
    const char strb[] = "string";
    
    printf("%i\n", equalStrings(stra, strb));
    printf("%i\n", equalStrings(stra, stra));
    printf("%i\n", equalStrings(strb, "string"));

    return (EXIT_SUCCESS);
}

