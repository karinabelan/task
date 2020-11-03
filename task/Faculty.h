#ifndef FACULTY_H
#define FACULTY_H

#include<string>
using namespace std;

class Faculty
{
	string nameFaculty;
	string decan;
	string specialty;
	int course;
	int numLectors;
	int phone;

public:
	Faculty(string = " ", string = " ", string = " ", int = 1, int = 10, int = 1);

	void Write();

};
#endif

