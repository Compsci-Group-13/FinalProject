#include <stdio.h>
#include <ctime>
#include <stdlib.h>

//This function takes two integers and chooses a random number between them (inclusive)
int RandBetween(const int minVal, const int maxVal) {

    return rand() % (maxVal - minVal + 1) + minVal;

}