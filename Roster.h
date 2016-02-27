#ifndef ROSTER_H
#define ROSTER_H
#include <string>

/*
	CLASS NAME: Roster 
	DESCRIPTION: Roster has two arrays, one is an array of 32 that will hold student id numbers. 
	The second array will be of size 32 and will hold student names.
	In addition your class will have an unsigned integer that will start at 0 and will represent the current spot that is available in the roster.
	For instance, after I add 3 students to the roster, the current index should be 3, (0-2 are taken, so next available is 3).
*/

class Roster
{
	private:
		std::string studentNames[32];
		std::string ids[32];
		unsigned int currentAvailable;
		
	public:
		// ****************************************************************************
		Roster();
		// Summary: Initializes current_available to 0, so that you add first student into index 0.
		// Preconditions: current_available has not been set to 0.
		// Postconditions: current_available has a value of 0.
		// ****************************************************************************
		//
		// ****************************************************************************
		void addStudent();
		// Summary: This method asks the user to enter the student's name and assigns it to the
		// student_names array at current_available. It should also ask for the student's id number and
		// store it in the id's array at the current available spot. The name and id get stored into array
		// location current_available. Then current_available is increased by 1.
		// Preconditons: current_available is not 32 or greater
		// Postcondition: The student has been added to the array and current_available has been
		// increased by 1.
		// ****************************************************************************
		//
		// ****************************************************************************
		void searchForStudent(std::string name);
		// Summary: This function finds the student whose name is passed in as input and their full
		// information is displayed as follows:
		// Name: First Lastname
		// ID#: 0002212
		// If name is not in array, the method should display "Student not found"
		// Preconditions: Object has been initialized.
		// Postconditions: Either the student’s information is displayed or “Student not found”
		// ****************************************************************************
		//
		// ****************************************************************************
		void displayRoster();
		// Summary: Displays information for all students in the following format:
		// Sample output is:
		// =============================
		// Roster
		// 1. Tommy Jones (02351)
		// 2. Sophia Hernandez (52312)
		// 3. Alex Heinz (23232)
		// =============================
		// Preconditions: The object has been initialized.
		// Postconditions: All names are displayed up to current_available (but not including
		// current_available.
		// ****************************************************************************
		//
		// ****************************************************************************
		void updateName(std::string id);
		// Summary: This function will search for the id and use the index where the id was found
		// to then ask the user for the new name and will replace current name with new name.
		// If the id is not found, then function will display a message saying that the id was not found.
		// Preconditions: id string is not empty "" and new name is not empty ("")
		// Postconditions: The name with matching id was updated to the new name.
		// ****************************************************************************
};

#endif //END ROSTER CLASS
