#ifndef STUDENT_H
#define STUDENT_H

#include<string>
#include<iostream>
#include"Person.h"
using namespace std;

class Student : public Person
{
public:
	int course;

	Student(string FN, string LN, int = 1);
	void WriteInfo();
	string strInfo();
};

#endif