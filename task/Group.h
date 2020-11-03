#ifndef GROUP_H
#define GROUP_H

#include<string>
using namespace std;

class Group
{
	string group;
	int numGroup;
	int numStudent;

public:
	Group(string = " ", int = 11, int = 5);

	void Write();
	string Getgroup();
	int GetnumGroup();
	int GetnumStudent();
};
#endif

