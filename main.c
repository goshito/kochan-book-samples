/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: georgi
 *
 * Created on April 11, 2016, 1:41 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Program 10.5, Reading Strings with scanf
 */

// Program to illustrate the %s scanf format characters

int main(int argc, char** argv) {
    
    char s1[81], s2[81], s3[81];
    
    printf("Enter text:\n");
    
    scanf("%s%s%s", s1, s2, s3);
    
    printf("\ns1 = %s\ns2 = %s\ns3 = %s\n", s1, s2, s3);

    return (EXIT_SUCCESS);
}

