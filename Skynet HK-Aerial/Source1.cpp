#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()


{
	srand(static_cast<unsigned int>(time(0)));
	//seed random number generator
//random number between 1 and 64
	int searchGridLowNumber = 1;
	int searchGridHighNumber = 64;
	int actualTargetLocation = rand() % searchGridHighNumber + searchGridLowNumber;
	int tries = 0;
	int attemptToLocateTarget = 0;

	cout << "\tWelcome to AI target finder.\n\n";

	do
	{
		// This is where the AI makes a target location guess
		cout << "\nThe real target location is at " << actualTargetLocation << endl;
		cout << "\nThe AI guesses the target is at location: " << attemptToLocateTarget << endl;
		attemptToLocateTarget = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;
		++tries;

		if (attemptToLocateTarget > actualTargetLocation)
			{
				cout << "The AI target prediction was Too high!\n\n";
				searchGridHighNumber - attemptToLocateTarget - 1;
			}
		else if (attemptToLocateTarget < actualTargetLocation)
		
		{
			cout << "The AI prediction was Too low!\n\n";
			searchGridLowNumber - attemptToLocateTarget + 1;
		}
		else
		{
			cout << "\nThat's it! The AI got it in " << tries << " guesses!\n";
		}
		} while (attemptToLocateTarget != actualTargetLocation);

		return 0;

	}