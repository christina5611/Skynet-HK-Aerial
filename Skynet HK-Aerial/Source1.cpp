#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()


{
	//seed random number generator
	srand(static_cast<unsigned int>(time(0)));
	
//init the simulation value
	int AI_binary_searchGridLowNumber = 1;
	int Ai_binary_searchGridHighNumber = 64;
	int human_searchGridLowNumber = 1;
	int human_searchGridHighNumber = 64;
	
	int AI_Binary_Number_of_predictions = 0;
	int AI_Binary_Current_Location_prediction = 0;
	int human_Number_of_predictions = 0;
	int human_Current_Location_prediction = 0;
	
	
	int actualTargetLocation = rand() % Ai_binary_searchGridHighNumber + AI_binary_searchGridLowNumber;
	//title of simulation
	cout << "\tWelcome to AI target finder.\n\n";
	//****************** Start Human Tries to Find the Target************************

	do
	{
		// This is where the human makes a target location guess
		cout << "\nThe real target location is at a secret location.\n "; 
		
		cout << "\nhuman please enter the target location:( " << human_searchGridLowNumber << "-" << human_searchGridHighNumber << "):";
		cin >> human_Current_Location_prediction;
		++human_Number_of_predictions;
		

		if (human_Current_Location_prediction > actualTargetLocation)
			{
				cout << "The human target prediction was Too high!\n\n";
				human_searchGridHighNumber - human_Current_Location_prediction - 1;
			}
		else if ( human_Current_Location_prediction < actualTargetLocation)
		
		{
			cout << "The human prediction was Too low!\n\n";
			human_searchGridLowNumber - human_Current_Location_prediction + 1;
		}
		else
		{
			cout << "\nThat's it! The human got it in " << human_Number_of_predictions << " guesses!\n";
		}
		} while (human_Current_Location_prediction != actualTargetLocation);
	// end human ai tries to find the target
	
		cout << "Binary is finished. Launch the linear Ai ";
		system("pause");
	//start binary ai tries to find the target
	do
	{
		// This is where the human makes a target location guess
		cout << "\nThe real target location is at \n ";

		cout << "\nThe Ai guess the target is at:( " << AI_Binary_Current_Location_prediction << endl;
		AI_Binary_Current_Location_prediction = ((Ai_binary_searchGridHighNumber - AI_binary_searchGridLowNumber) / 2) + AI_binary_searchGridLowNumber;
		++AI_Binary_Number_of_predictions;

		if (AI_Binary_Current_Location_prediction > actualTargetLocation)
		{
			cout << "The human target prediction was Too high!\n\n";
			Ai_binary_searchGridHighNumber - AI_Binary_Current_Location_prediction - 1;
		}
		else if (AI_Binary_Current_Location_prediction < actualTargetLocation)

		{
			cout << "The human prediction was Too low!\n\n";
			AI_binary_searchGridLowNumber - AI_Binary_Current_Location_prediction + 1;
		}
		else
		{
			cout << "\nThat's it! The Ai got it in " << AI_Binary_Number_of_predictions << " guesses!\n";
		}
	} while ( AI_Binary_Current_Location_prediction != actualTargetLocation);
	// end human ai tries to find the target
	return 0;
	}
		
