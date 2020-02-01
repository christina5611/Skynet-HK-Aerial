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
	int AI_linear_searchGridLowNumber = 1;
	int AI_linear_searchGridHighNumber = 64;
	
	int AI_Binary_Number_of_predictions = 0;
	int AI_Binary_Current_Location_prediction = 0;
	int human_Number_of_predictions = 0;
	int human_Current_Location_prediction = 0;
	int AI_Linear_Number_of_predictions = 0;
	int AI_Linear_Current_Location_prediction = 0;


	
	
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
	
		cout << "Binary is finished. Launch the Ai ";
		system("pause");
	//*************start binary ai tries to find the target*********
	do
	{
		

		cout << "\nThe Ai guess the target is at:( " << AI_Binary_Current_Location_prediction << endl;
		AI_Binary_Current_Location_prediction = ((Ai_binary_searchGridHighNumber - AI_binary_searchGridLowNumber) / 2) + AI_binary_searchGridLowNumber;
		++AI_Binary_Number_of_predictions;

		if (AI_Binary_Current_Location_prediction > actualTargetLocation)
		{
			cout << "The Ai target prediction was Too high!\n\n";
			Ai_binary_searchGridHighNumber = AI_Binary_Current_Location_prediction - 1;
		}
		else if (AI_Binary_Current_Location_prediction < actualTargetLocation)

		{
			cout << "The Ai prediction was Too low!\n\n";
			AI_binary_searchGridLowNumber = AI_Binary_Current_Location_prediction + 1;
		}
		else
		{
			cout << "\nThat's it! The Ai got it in " << AI_Binary_Number_of_predictions << " guesses!\n";
		}
	} while ( AI_Binary_Current_Location_prediction != actualTargetLocation);
	// end binary ai tries to find the target
	system("pause");
	//********* Linear Ai tries to find target*********
	do
	{


		cout << "\nThe Linear Ai guess the target is at: " << AI_Linear_Current_Location_prediction << endl;
		AI_Linear_Current_Location_prediction = ((AI_linear_searchGridHighNumber- AI_linear_searchGridLowNumber) / 2) + AI_linear_searchGridLowNumber;
		++AI_Linear_Number_of_predictions;

		if (AI_Linear_Current_Location_prediction > actualTargetLocation)
		{
			cout << "The guess was wrong\n\n";
			AI_linear_searchGridHighNumber = AI_Linear_Current_Location_prediction - 1;
		}
		else if (AI_Linear_Current_Location_prediction < actualTargetLocation)

		{
			cout << "The guess was wrong\n\n";
			AI_linear_searchGridLowNumber = AI_Linear_Current_Location_prediction + 1;
		}
		else
		{
			cout << "\nThat's it! The Linear Ai got it in " << AI_Linear_Number_of_predictions << " guesses!\n";
		}
	} while (AI_Linear_Current_Location_prediction != actualTargetLocation);
	// end linear ai tries to find the target
	
	cout << "\nThe human got it in " << human_Number_of_predictions << "guesses!\n";
	cout << "\nThe binary Ai got it in " << AI_Binary_Number_of_predictions << "guesses!\n";
	cout << "\nThe Linear Ai got it in " << AI_Linear_Number_of_predictions << "guesses!\n";
	cout << "\nWould you like to play again? Y/N ";
	
	}
 
		
