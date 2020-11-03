#include "Student.h" 


Student::Student(string FN, string LN, int course) : Person(FN, LN)
{
    this->course = course;
}
void Student::WriteInfo()
{
    cout << "First Name:" << FN << "Last Name:" << LN << "Course:" << course << endl;
}

string Student::strInfo()
{
    return FN + " " + LN + " " + to_string(course) + "\n";
}