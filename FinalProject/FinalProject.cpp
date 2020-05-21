//File: FinalProject.cpp
//Names: Chelsea Nava, Juan Lopez, Sedrick Webb, William Becerra
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
void MainMenu(Character& Herko, Character& Enemy);
void WakeUp();
void DailyEvent(int choice, Character& Hero, Character& Enemy);
void EndOfTheDay();

int main()
{

    //define characters
    Character Hero(15, 5, 10);
    Character Enemy(20, 2, 1);

    const int VECTOR_SIZE = 4;                  //Initialize vector size
    vector<string> eventVector(VECTOR_SIZE);    //Vector to store events
    int randEvent;                              //index for event chosen at random
    int dayNumber = 0;                          //keep track of day

    //populate vector with events
    eventVector.at(0) = "My Event 1";
    eventVector.at(1) = "My Event 2";
    eventVector.at(2) = "My Event 3";
    eventVector.at(3) = "My Event 4";

    //seed rand
    //srand(time(0)); moved  to global function so that it is a new seed every time it is called.

    /*
    //Set up Hero
    Hero.setHealth(15);
    Hero.setAttack(5);
    Hero.setStamina(10);

    //Set up Enemy
    Enemy.setHealth(20);
    Enemy.setAttack(2);
    Enemy.setStamina(1);
    */

    //grab random index from events vector
    randEvent = EventPicker(eventVector);

    //Now this is where you add the switch statement using randEvent variable

    MainMenu(Hero, Enemy);

    do
    {
        WakeUp();

        DailyEvent(randEvent, Hero, Enemy);

        EndOfTheDay();
        cout << endl << endl;
        dayNumber++;
    } while (dayNumber < VECTOR_SIZE);

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


void MainMenu(Character& Hero, Character& Enemy)
{
    bool hasStarted = false;
    char start;

    cout << "   Welcome to" << "\n  Adventure Day\n\n";
    cout << "These are completely random events in a random kids life\n";
    Sleep(2000);
    cout << "Its all for fun.....\n";
    Sleep(2000);

    cout << "Press 'y' to start.\n";
    cin >> start;

    do {
        if (start == 'y')
        {
            !hasStarted;
            return;
        }
        else
        {
            cout << "\nWaiting to start... Press 'y' to start.\n";
            cin >> start;
        }
    } while (hasStarted == false);

}
void WakeUp()
{
    cout << "*Alarm rings*\n";
    cout << "*YAWNS*'Another day. Another adventure.'\n";
    cout << "'Let's get ready for the day.' \n";
    cout << "* ";
    Sleep(2);
    cout << "* ";
    Sleep(2);
    cout << "*\n";
    cout << "Let's get out there for the day.";
    return;
}
void DailyEvent(int choice, Character& Hero, Character& Enemy)
{
    cout << endl << choice << endl;
    switch (choice)
    {
    case 1:
    {
        myEvent1(Hero, Enemy);
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
    cout << "\nYou walk in and shut the door behind you.\n";
    cout << "'I am beat. Have I eaten today?' \n";
    cout << " It's okay, I will just shut my eyes for a . . .\n";
    Sleep(2);
    cout << " zzzZZZZ\n";
    return;
}