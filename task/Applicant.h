#ifndef APPLICANT_H
#define APPLICANT_H

#include<string>
#include<iostream>
#include"Person.h"
using namespace std;

class Applicant : public Person
{
public:
	string specialty;

	Applicant(string FN, string LN, string specialty);
	virtual void Write();
	void addApplicant(string FN, string LN, string specialty);
	string strInfo();
};

#endif
