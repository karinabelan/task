//#include "StudentRepository.h"
//#include <fstream>
//using namespace std;
//
//GroupRepository::GroupRepository(bool sync) : Repository(sync)
//{
//    ReadFromStorage();
//}
//
//GroupRepository::~GroupRepository()
//{
//
//}
//bool GroupRepository::Add(Group& group)
//{
//    return Repository::Add(&group);
//}
//
//void GroupRepository::ReadFromStorage()
//{
//
//    ifstream fin("Group.txt");
//
//    int maxLen = 50;
//    char* group = new char[maxLen],
//        * numGroup = new char[maxLen],
//        * numStudent = new char[maxLen];
//    char coma = ',';
//    while (!fin.eof())
//    {
//
//        fin.get(group, maxLen, coma);
//        fin.get();
//        fin.get(numGroup, maxLen, coma);
//        fin.get();
//        fin.get(numStudent, maxLen);
//        fin.get();
//
//
//        /*Group* group = new Group(group, atoi(numGroup), atoi(numStudent));*/
//        /*Add(*group);*/
//    }
//
//    fin.close();
//
//    delete[] group;
//    delete[] numGroup;
//    delete[] numStudent;
//}
//
//
//void GroupRepository::WriteToStorage()
//{
//    ofstream fout("Group.txt");
//
//    for (int i = 0; i <= actual; i++)
//    {
//        Group* group = (Group*)data[i];
//        fout << group->Getgroup() << ","
//            << group->GetnumGroup() << ","
//            << group->GetnumStudent();
//
//        if (i < actual)
//            fout << endl;
//    }
//
//    fout.close();
//
//}

#include "StudentRepository.h"

StudentRepository::StudentRepository(bool data) :Repository(data)
{
    readFromFile();
}

void StudentRepository::readFromFile()
{
    ifstream fileStudent("Student.txt");
    string FN;
    string LN;
    int course;
    if (!fileStudent)
    {
        throw("Error");
    }

    while (fileStudent)
    {
        if (fileStudent >> FN >> LN >> course)
        {
            Student* data = new Student(FN, LN, course);
            Add(*data);
        }
    }
    fileStudent.close();
}

void StudentRepository::writeToFile()
{
    ofstream fileStudent("Studentout.txt", ios::out);
    if (!fileStudent)
    {
        throw("Error");
    }
    else 
    {
        for (int i = 0; i < entity.size(); i++) 
        {
            fileStudent << ((Student*)entity[i])->strInfo();
        }
    }
    fileStudent.close();

}

bool StudentRepository::Add(Student& student)
{
    return Repository::Add(&student);
}

void StudentRepository::read()
{
    string line;

    ifstream in("Student.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            cout << line << endl;
        }
    }
    in.close();
}