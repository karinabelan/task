#ifndef PERSON_H
#define PERSON_H
#include"Entity.h"
#include<string>
#include<iostream>
using namespace std;

class Person: public Entity
{
protected:
	string FN;
	string LN;
public:
	Person(string = " ", string = " ");
	
};

#endif 