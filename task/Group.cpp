#include"Group.h"
#include<iostream>

using namespace std;
Group::Group(string group, int numGroup, int numStudent)
{
	this->group = group;
	this->numGroup = numGroup;
	this->numStudent = numStudent;

}
void Group::Write()
{
	cout << "Group info: " << group << " " << numGroup << " "<<numStudent<<endl;
}
string Group::Getgroup()
{
	return group;
}
int Group::GetnumGroup()
{
	return numGroup;
}
int Group::GetnumStudent()
{
	return numStudent;
}
