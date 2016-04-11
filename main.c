/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 11, 2016, 3:40 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Chapter 10, Program 10.7, Counting Words
 */

// Function to determine if a character is alphabetic

bool alphabetic(const char c) {
    if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
        return true;
    else
        return false;
}

// Function to count the number of words in a string

int countWords(const char string[]) {
    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic(const char c);
    
    for (i = 0; string[i] != '\0'; ++i)
        if (alphabetic(string[i])) {
            if (lookingForWord) {
                ++wordCount;
                lookingForWord = false;
            }
        } else
            lookingForWord = true;
    
    return wordCount;
}

int main(int argc, char** argv) {
    
    const char text1[] = "Well, here goes.";
    const char text2[] = "And here we go... again.";
    int countWords(const char string[]);
    
    printf("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));

    return (EXIT_SUCCESS);
}

