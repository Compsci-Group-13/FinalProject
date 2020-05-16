//File: OOP2.cpp
//Names: 
//Date: 05/15/2020
//Course: CompSci 1
//Description: This program will be a game
//Usage: The user will be able to make decisions day by day

#include <iostream>
#include <stdio.h>
#include <ctime>
#include <stdlib.h>
#include <vector>

#include "GlobalFunctionDefinitions.h"
#include "Event.h"

using namespace std;

//Prototype functions
int EventPicker(const vector<int>& EventIndexes);
int EventPicker(const vector<string>& EventNames);

int main()
{
    //seed rand
    srand(time(0));
    
    return 0;
}

//overloaded function that returns the index of a random element in array
int EventPicker(const vector<int>& EventIndexes) {

    return RandBetween(0, EventIndexes.size());

}

//overloaded function that returns the index of a random element in array
int EventPicker(const vector<string>& EventNames) {

    return RandBetween(0, EventNames.size());

}