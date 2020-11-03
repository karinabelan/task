#include"Faculty.h"
#include<iostream>

using namespace std;

Faculty::Faculty(string nameFaculty, string decan, string specialty, int course, int numLectors, int phone)
{
	this->nameFaculty = nameFaculty;
	this->decan = decan;
	this->specialty = specialty;
	this->course = course;
	this->numLectors = numLectors;
	this->phone = phone;

}
void Faculty::Write()
{
	cout << "Faculty info: " << nameFaculty << endl;
}
