#include "Roster.h"
#include <iostream>
#include <string>
using namespace std;
char menu();

int main()
{
	Roster Axio;
	char chosen;
	bool repeat = true;
	string name, id;
	string first, last, full;
	do
	{
		chosen = menu();
		switch(chosen)
		{
			case '+':
				Axio.addStudent();
				break;
			case 'a':
				Axio.displayRoster();
				break;
			case 's':
				cout << "Enter student first name: ";
				cin >> first;
				cout << "Enter student last name: ";
				cin >> last;
				full = first + " " + last;
				Axio.searchForStudent(full);
				break;
			case 'u':
				cout << "Update name; enter id: ";
				cin >> id;
				Axio.updateName(id);
				break;
			case 'q':
				repeat = false;
				cout << "Okay, bye, go study." << endl;
				break;
			default:
				cout << "Invalid input, try again." << endl;
				break;
		}
	}while (repeat == true);

	return 0;
}//END MAIN

char menu()
{
	char choice;
	cout << endl;
	cout << "‘+’ – Adds a student to the roster." << endl;
	cout << "‘a’ – Displays all students." << endl;
	cout << "‘s’ – Searches for student by name. Will ask for name." << endl;
	cout << "‘u’ – Ask for student id and update the name for that students. Will ask for a new name." << endl;
	cout << "‘q’ – Quit the application." << endl;
	cout << "Enter your choice: ";
	cin >> choice;
	choice = tolower(choice);
	return choice;
}//END MENU
