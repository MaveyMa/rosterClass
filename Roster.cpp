#include "Roster.h"
#include <iostream>
#include <string>
using namespace std;

Roster::Roster()
{
	currentAvailable = 0;
}//END ROSTER DEFAULT CONSTRUCTOR

void Roster::addStudent()
{
	string first, last, full;
	cout << "Enter student first name: ";
	cin >> first;
	cout << "Enter student last name: ";
	cin >> last;
	full = first + " " + last;
 	studentNames[currentAvailable] = full;
	cout << "Enter student ID: ";
	cin >> ids[currentAvailable];
	currentAvailable++;
	return;
}//END ADD STUDENT +

void Roster::searchForStudent(string name)
{
	for (int i = 0; i < currentAvailable; i++)
	{
		if (studentNames[i] == name)
		{
			cout << "Found (1)" << endl;
			cout << "Name: " << studentNames[i] << endl;
			cout << "ID#: " << ids[i] << endl;
			cout << endl;
			return;
		}
	}//END FOR
	cout << "Student not found." << endl;
	return;
}//END SEARCH FOR STUDENT s

void Roster::displayRoster()
{
	cout << "=============================" << endl;
	cout << "Roster" << endl;
	for (int i = 0; i < currentAvailable; i++)
	{
		cout << i+1 << ". " << studentNames[i]
			 << " (" << ids[i] << ")" << endl;
	}//END FOR
	cout << "=============================" << endl;
	return;
}//END DISPLAY ROSTER a

void Roster::updateName(string id)
{
	string first, last, full;
	for (int i = 0; i < currentAvailable; i++)
	{
		if (ids[i] == id)
		{
			cout << "Found " << studentNames[i] << ". "
				 << "Update name now." << endl;
			cout << "Enter student first name: ";
			cin >> first;
			cout << "Enter student last name: ";
			cin >> last;
			full = first + " " + last;
		 	studentNames[i] = full;
			return;
		}
	}//END FOR
	cout << "Student not found." << endl;
	return;
}//END UPDATE ROSTER u
