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
#include <Windows.h>

#include "GlobalFunctionDefinitions.h"
#include "EventDefinitions.h"
#include "Character.h"

using namespace std;

//Prototype functions
int EventPicker(const vector<int>& EventIndexes);
int EventPicker(const vector<string>& EventNames);

//define characters
Character Hero;
Character Enemy;

int main()
{
    const int VECOR_SIZE = 4;
    vector<string> eventVector(VECOR_SIZE);
    int randEvent;

    eventVector.at(0) = "My Event 1";
    eventVector.at(1) = "My Event 2";
    eventVector.at(2) = "My Event 3";
    eventVector.at(3) = "My Event 4";
    
    //seed rand
    srand(time(0));

    //Set up Hero
    Hero.setHealth(15);
    Hero.setAttack(5);
    Hero.setStamina(10);

    //Set up Enemy
    Enemy.setHealth(20);
    Enemy.setAttack(2);
    Enemy.setStamina(1);

    cout << "These are completely random events in a random kids life\n";
    Sleep(2000);
    cout << "Its all for fun....." << endl;
    Sleep(2000);
    
    randEvent = EventPicker(eventVector);

    //Now this is where you add the switch statement using randEvent variable


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