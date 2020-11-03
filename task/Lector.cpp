#include "Lector.h" 


Lector::Lector(string FN, string LN, string pew) : Person(FN, LN)
{
    this->FN = FN;
    this->LN = LN;
    this->pew = pew;
}
void Lector::Write()
{
    cout << "First Name:" << FN << "Last Name:" << LN << "Pew:" << pew << endl;
}
string Lector::strInfo()
{
    return FN + " " + LN + " " + pew + "\n";
}