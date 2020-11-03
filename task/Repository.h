//#pragma once
//
//#include "Entity.h"
//
//class Repository
//{
//protected:
//	Entity** data;
//	int maxLen;
//	int actual;
//	bool sync;
//
//	bool Add(Entity*);
//	virtual void ReadFromStorage() {}
//	virtual void WriteToStorage() {}
//
//public:
//	Repository(bool sync = false);
//	~Repository();
//};

#ifndef REPOSITORY_H
#define REPOSITORY_H

#include "Entity.h"
#include <fstream>
#include <vector>
using namespace std;

class Repository 
{
protected:
    bool Add(Entity*);

    bool data;

    vector <Entity*> entity;
public:
    ~Repository();

    Repository(bool data = false);

    virtual void writeToFile()
    {
    }

    virtual void readFromFile()
    {
    }

    vector <Entity*> GetEntity();

    void deleteIndex(int index);

};

#endif