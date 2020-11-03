#include "Applicant.h" 


Applicant::Applicant(string FN, string LN, string specialty) : Person(FN, LN)
{
    this->FN = FN;
    this->LN = LN;
    this->specialty = specialty;
}
void Applicant::Write()
{
    cout << "First Name:" << FN << "Last Name:" << LN << "Course:" << specialty << endl;
}
void Applicant::addApplicant(string FN, string LN, string specialty)
{
    addApplicant(FN, LN, specialty);
    this->specialty = specialty;
}
string Applicant::strInfo()
{
    return FN + " " + LN + " " + specialty + "\n";
}