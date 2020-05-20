#include <iostream>
#include <Windows.h>

#include "StateMachine.h"

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
			!hasStarted;
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
void DailyEvent()
{
	
	int EventPicker();

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