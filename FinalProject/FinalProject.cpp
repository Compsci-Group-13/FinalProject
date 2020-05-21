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

//GameFunctions
void MainMenu();
void WakeUp();
void DailyEvent(int choice);
void EndOfTheDay();




int main()
{
    //define characters
    Character Hero(15, 5, 10);
    Character Enemy(20, 2, 1);

    const int VECOR_SIZE = 4;
    vector<string> eventVector(VECOR_SIZE);
    int randEvent;
    int dayNumber = 0;

    eventVector.at(0) = "My Event 1";
    eventVector.at(1) = "My Event 2";
    eventVector.at(2) = "My Event 3";
    eventVector.at(3) = "My Event 4";
    
    //seed rand
    //srand(time(0)); moved  to global function so that it is a new seed every time it is called.

   
    randEvent = EventPicker(eventVector);

    //Now this is where you add the switch statement using randEvent variable

    MainMenu();

    do
    {
        WakeUp();
        DailyEvent(randEvent);
        EndOfTheDay();
        cout << endl << endl;
        dayNumber++;
    } while (dayNumber < VECOR_SIZE);

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


void MainMenu()
{
    bool hasStarted = false;
    char start;

    std::cout << "   Welcome to" << "\n  Adventure Day\n\n";
    std::cout << "These are completely random events in a random kids life\n";
    Sleep(2000);
    std::cout << "Its all for fun.....\n";
    Sleep(2000);

    std::cout << "Press 'y' to start.\n";
    std::cin >> start;

    do {
        if (start == 'y')
        {
            hasStarted = !hasStarted;
            return;
        }
        else
        {
            std::cout << "\nWaiting to start... Press 'y' to start.\n";
            std::cin >> start;
        }
    } while (hasStarted == false);

}
void WakeUp()
{
    std::cout << "*Alarm rings*\n";
    std::cout << "*YAWNS*'Another day. Another adventure.'\n";
    std::cout << "'Let's get ready for the day.' \n";
    std::cout << "* ";
    Sleep(2);
    std::cout << "* ";
    Sleep(2);
    std::cout << "*\n";
    std::cout << "Let's get out there for the day.";
    return;
}
void DailyEvent(int choice)
{
   

    switch (choice)
    {
    case 1:
        {
        myEvent1(Character::Hero, Character::Enemy);
        break;
        }
    case 2:
        {
        myEvent2();
        break;
        }
    case 3:
        {
        myEvent3(Hero, Enemy);
        break;
        }
    case 4:
        {
        myEvent4(Hero, Enemy);
        break;
        }
    default:
        cout << "Internal Error";
        break;
    }
    return;
}
void EndOfTheDay() //text that plays after the end of the days event
{
    std::cout << "\nYou walk in and shut the door behind you.\n";
    std::cout << "'I am beat. Have I eaten today?' \n";
    std::cout << " It's okay, I will just shut my eyes for a . . .\n";
    Sleep(2);
    std::cout << " zzzZZZZ\n";
    return;
}