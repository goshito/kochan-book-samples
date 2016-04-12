/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 11, 2016, 10:24 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * Chapter 10, Program 10.8, Counting Words in a Piece of Text
 */

// Function to determine if a character is alphabetic

bool alphabetic(const char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else
        return false;
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

// Function to count the number of words in the a string

int countWords(const char string[]) {
    int i, wordCount = 0;
    bool lookingForWord = true, alphabetic(const char c);
    
    for (i = 0; string[i] != '\0'; ++i)
        if (alphabetic(string[i])) {
            if (lookingForWord) {
                ++wordCount;
                lookingForWord = false;
            }
        }
        else
            lookingForWord = true;
    
    return wordCount;
}

int main(int argc, char** argv) {
    char text[81];
    int totalWords = 0;
    int countWords(const char string[]);
    void readLine(char buffer[]);
    bool endOfText = false;
    
    printf("Type in your text.\n");
    printf("When you are done, press 'RETURN.\n\n");
    
    while (! endOfText) {
        readLine(text);
        
        if (text[0] == '\0')
            endOfText = true; //How come enter has to be pressed twice to end text entering?
        else
            totalWords += countWords(text);
    }
    
    printf("\nThere are %i words in the above text.\n", totalWords);

    return (EXIT_SUCCESS);
}

