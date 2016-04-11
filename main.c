/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 11, 2016, 2:23 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Chapter 10, Program 10.6, Reading Lines of Data
 */
int main(int argc, char** argv) {
    
    int i;
    char line[81];
    void readLine(char buffer[]);
    
    for (i = 0; i < 3; ++i) {
        readLine(line);
        printf("%s\n\n", line);
    }

    return (EXIT_SUCCESS);
}

// Function to read a line of text from the terminal

void readLine(char buffer[]) {
    char character;
    int i = 0;
    
    do {
        character = getchar();
        buffer[i] = character;
        ++i;
    } while (character != '\n');
    
    buffer[i - 1] = '\0';
}

