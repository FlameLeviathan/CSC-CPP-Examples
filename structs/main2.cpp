// Class example showing how to use a struct
// to build a multi-file application

#include <iostream>
#include <string>

using namespace std;

struct Student 
{
	string firstName;
	string lastName;
	long ID;
	float GPA;
};

// Functions that act on STUDENT structs
void WriteStudent(ostream& ostrm, const Student& student);

// Main Program
int main()
{
	Student student;

	cout << "First Name: ";
	cin >> student.firstName;
	cout << "Last Name: ";
	cin >> student.lastName;
	cout << "ID: ";
	cin >> student.ID;
	cout << "GPA: ";
	cin >> student.GPA;
//	ofstream outputFile("somefile.txt");
//	WriteStudent(outputFile, student);
	WriteStudent(cout, student);
	
	return 0;
}

// Write the fields of a STUDENT struct on separate lines to an output stream object
// ostrm - an ostream object
// student - a STUDENT record
// Returns: nothing
void WriteStudent(ostream& ostrm, const Student& student)
{
	ostrm << "First Name: " << student.firstName << endl;
	ostrm << "Last Name: " << student.lastName << endl;
	ostrm << "ID: " << student.ID << endl;
	ostrm << "GPA: " << student.GPA << endl;
}
