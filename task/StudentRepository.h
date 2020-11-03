//#pragma once
//#include "Repository.h"
//#include "Group.h"
//
//class GroupRepository : public Repository
//{
//public:
//	GroupRepository(bool sync = false);
//	~GroupRepository();
//	bool Add(Group& group);
//	void WriteToStorage();
//	void ReadFromStorage();
//};

#ifndef STUDENTREPOSITORY_H
#define STUDENTPOSITORY_H

#include <fstream>
#include "Repository.h"
#include "Student.h"

class StudentRepository : public Repository
{
public:
    StudentRepository(bool data = false);

    ~StudentRepository() {}

    void readFromFile();
    void writeToFile();
    void read();

    bool Add(Student& student);

};

#endif