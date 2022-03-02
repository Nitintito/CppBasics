#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int n;
int hiddenNumber;
int numberOfTries;

int RandomNumber()
{
	srand(time(0));
	hiddenNumber = std::rand() % 10 +1;
	return hiddenNumber;
}

int main()
{
	RandomNumber();
	std::cout << hiddenNumber << "\n";

	do
	{
		std::cout << "Guess a number between 1 and 10: ";
		std::cin >> n;
		system("cls");
		numberOfTries++;

		std::cout << "You guessed the wrong number try again\n\n";
		std::cout << "Number of tries: " << numberOfTries << "\n\n";
	} while (n != hiddenNumber);
	
	system("cls");
	std::cout << "You guessed the Corect number in: " << numberOfTries << " tries\n";
}