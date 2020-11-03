#include "Command.h" 
#include <iostream> 
#include <algorithm> 
#include <fstream> 
#include <string> 
using namespace std;



void Command::WriteFaculty()
{
    string line;

    ifstream in("Faculty.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();

}


void Command::WriteFacultyInfo()
{
    string line;

    ifstream in("FacultyInfo.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();
}

//void Command::WriteGroup()
//{
//    groupRepository.WriteToStorage();
//}
//void Command::AddGroup(Group& gro)
//{
//    groupRepository.Add(gro);
//}
Command::Command()
{
    groups = new Group[100];
    lastGroupIndex = -1;

    ifstream fin("Group.txt");

    int maxLen = 50;
    char* group = new char[maxLen],
        * numGroup = new char[maxLen],
        * numStudent = new char[maxLen];
    char coma = ',';
    while (!fin.eof())
    {

        fin.get(group, maxLen, coma);
        fin.get();
        fin.get(numGroup, maxLen, coma);
        fin.get();
        fin.get(numStudent, maxLen);
        fin.get();


        Group group(group,atoi(numGroup),atoi(numStudent));
        AddGroup(group);
    }

    fin.close();

    delete[] group;
    delete[] numGroup;
    delete[] numStudent;
}


Command::~Command()
{
    ofstream fout("Group.txt");

    for (int i = 0; i <= lastGroupIndex; i++)
    {
        fout << groups[i].Getgroup() << ","
            << groups[i].GetnumGroup() << ","
            << groups[i].GetnumStudent();

        if (i < lastGroupIndex)
            fout << endl;
    }

    fout.close();

    delete[] groups;
}

void Command::AddGroup(Group& group)
{
    if (lastGroupIndex >= 5)
    {
        throw "no memory !!!";
    }
    groups[++lastGroupIndex] = group;
}

void Command::WriteGroup()
{

    for (int i = 0; i <= lastGroupIndex; i++)
    {
        groups[i].Write();
    }
}

void Command::WritePerson()
{
    string line;

    ifstream in("Person.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();

}
void Command::AddStudent(Student&student)
{
    studentRepository.Add(student);
}
void Command::WriteStudent()
{
    studentRepository.read();
}

void Command::WriteApplicant()
{
    string line;

    ifstream in("Applicant.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();

}

void Command::WriteLector()
{
    string line;

    ifstream in("Lector.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();

}