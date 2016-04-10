/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 11, 2016, 1:25 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Chapter 10, Program 10.3, Concatenating Character Strings
 */
int main(int argc, char** argv) {
    
    void concat(char result[], const char str1[], const char str2[]);
    const char s1[] = {"Test "};
    const char s2[] = {"works."};
    char s3[20];
    
    concat(s3, s1, s2);
    
    printf("%s\n", s3);

    return (EXIT_SUCCESS);
}

// Function to concatenate two character strings

void concat(char result[], const char str1[], const char str2[]) {
    
    int i, j;
    
    // copy str1 to result
    
    for (i = 0; str1[i] != '\0'; ++i)
        result[i] = str1[i];
    
    // copy str2 to result
    
    for (j = 0; str2[j] != '\0'; ++j)
        result[i + j] = str2[j];
    
    // Terminate the concatenated string with a null character
    
    result[i + j] = '\0';
}

