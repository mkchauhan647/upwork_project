/*
 It's for testing purpose only that implemented piglating program is working fine or not.
*/

#include <stdio.h>
#include "pig.h"
#include "test_pig.h"
#include "piglatin.h"


int main(){

 test_pig();  // Calling test_pig() function which print all the examples and their piglatin equivalent.

 piglatin(); // calling piglating() function will ask for a line/sentence and then convert all the words in their piglating equivalent.
    
}