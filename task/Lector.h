#ifndef LECTOR_H
#define LECTOR_H

#include<string>
#include<iostream>
#include"Person.h"
using namespace std;

class Lector :public Person
{
public:
	string pew;//kafedra
	Lector(string = " ", string = " ", string = " ");
	virtual void Write();
	string strInfo();
};

#endif 