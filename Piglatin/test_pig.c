/*
This function tests each of
the examples given in the questions. This test program should print each example, one per line, in the
form:
word => translation

*/
#include <stdio.h>
#include "test_pig.h"
#include "pig.h"


// @param No parameters. 
void test_pig(){

   // Storing each examples given in two dimensional string.
    char strp[10][10] = {"happy","duck","glove","evil","eight","yowler","crystal"};

    // Printing the lating of each of the above 
    printf("Examples:\n");

    // Looping through items of strp
    for(int i=0;i<7;i++){
       // Printing the required answers by calling pig functions which is defined in pig.c file and which returs piglatin for each english word.   
       printf("%s => %s\n",strp[i],pig(strp[i])); 
    }


}