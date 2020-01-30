#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()


{
	srand(static_cast<unsigned int>(time(0)));
	//seed random number generator
//random number between 1 and 64
	int human_searchGridLowNumber = 1;
	int human_searchGridHighNumber = 64;
	
	int AI_binary_searchGridLowNumber = 1;
	int AI_binary_searchGridHighNumber = 64;
	
	int AI_linear_searchGridLowNumber = 1;
	int AI_linear_searchGridHighNumber = 64;
	
	int AI_random_searchGridLowNumber = 1;
	int AI_random_searchGridHighNumber = 64;
	
	int human_Number_of_predictions = 0;
	int human_Current_Location_prediction = 0;
	
	int AI_Linear_Number_of_predictions = 0;
	int AI_Linear_Current_Location_prediction = 0;


	
	
	int actualTargetLocation = rand() % AI_binary_searchGridHighNumber + AI_binary_searchGridLowNumber ;
	int tries = 0;
	int Ai_Linear_Current_Location_prediction = 0;

	cout << "\tWelcome to AI target finder.\n\n";

	do
	{
		// This is where the AI makes a target location guess
		cout << "\nThe real target location is at " << actualTargetLocation << endl;
		AI_Linear_Number_of_predictions++;
		
		cout << "\nThe AI guesses the target is at location: " << Ai_Linear_Current_Location_prediction << endl;
		
		Ai_Linear_Current_Location_prediction = ((AI_binary_searchGridHighNumber - AI_binary_searchGridLowNumber) / 2) + AI_binary_searchGridLowNumber;
		++AI_Linear_Number_of_predictions;

		if (Ai_Linear_Current_Location_prediction > actualTargetLocation)
			{
				cout << "The AI target prediction was Too high!\n\n";
				AI_binary_searchGridHighNumber - Ai_Linear_Current_Location_prediction - 1;
			}
		else if (Ai_Linear_Current_Location_prediction < actualTargetLocation)
		
		{
			cout << "The AI prediction was Too low!\n\n";
			AI_binary_searchGridLowNumber - Ai_Linear_Current_Location_prediction + 1;
		}
		else
		{
			cout << "\nThat's it! The AI got it in " << human_Number_of_predictions << " guesses!\n";
		}
		} while (Ai_Linear_Current_Location_prediction != actualTargetLocation);
	
		cout << "Binary is finished. Launch the linear Ai";
		system("pause");
		return 0;

	}

