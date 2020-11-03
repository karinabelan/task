#ifndef COMMAND_H 
#define COMMAND_H 
#include "Group.h" 
#include "Student.h" 
#include "Group.h" 
#include"Applicant.h"
#include"Lector.h"
#include"Person.h"
#include "Person.h"
#include "Applicant.h"
#include"StudentRepository.h"
#include"Repository.h"
#include <iostream> 
#include<string>


class Command
{
    StudentRepository studentRepository = StudentRepository(true);
     Group* groups;
    int lastGroupIndex;

public:
    Command();
    ~Command();
    void WriteFaculty();
    void AddGroup(Group&);
    void WriteGroup();
    void WritePerson();
    void WriteStudent();
    void AddStudent(Student&);
    void WriteApplicant();
    void WriteLector();
    void WriteFacultyInfo();


};

#endif
