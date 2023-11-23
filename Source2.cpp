
#include <iostream>
#include "PersonType.h"
#include "CandidateType.h"
using namespace std;
void displayMenu();
void processChoice(CandidateList& candidateList);
int main()
{
	//Create the list
	CandidateList candidateList;
	//fill the list with candidates data
	readCandidateData(candidateList);
	//Make a choice
	displayMenu();
	//Process the choice
	processChoice(candidateList);
	cout << endl;
	system("Pause");
	return 0;
}
void displayMenu()
{
	cout << "\n*** MAIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << " 1: Print all candidates" << endl;
	cout << " 2: Print a candidate's campus votes" << endl;
	cout << " 3: Print a candidate's total votes" << endl;
	cout << " 4: Print winner" << endl;
	cout << " 5: Print final results" << endl;
	cout << " 6: To exit" << endl;
}
void processChoice(CandidateList& candidateList)
{
	int choice;
	cout << "\nEnter your choice: ";
	cin >> choice;
	while (choice != 6)
	{
		string fName, lName;
		int campus = 0,
			ssn = 0;
		switch (choice)
		{
			// Print all candidates
		case 1:
			cout << endl;
			candidateList.printAllCandidates();