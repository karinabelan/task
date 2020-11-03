#include"Command.h" 
#include<iostream> 
#include<fstream>


using namespace std;
void showMenu()
{
    Command cmd;



    cout << "Welcome!" << endl;
    Group c;

    
    int maxLen = 50;
    char* group = new char[maxLen],
        * numGroup = new char[maxLen],
        * numStudent = new char[maxLen];

    while (true)
    {
        cout << "1. Faculty" << endl;
        cout << "2. Faculty info" << endl;
        cout << "3. group" << endl;
        //cout << "4. Add group" << endl;
        cout << "4. People" << endl;
        cout << "0 - Exit" << endl;
        cout << endl;
        char userInput;
        cin >> userInput;

        bool isExit = false;

        switch (userInput)
        {
        case '1':
        {
            cmd.WriteFaculty();
        }
        break;
        case'2':
        {
            cmd.WriteFacultyInfo();
        }
        break;
        case '3':
        {
            //cmd.WriteGroup();
            while (true)
            {
                cout << "1. Show group" << endl;
                cout << "2. Add group" << endl;
                cout << "9 - Exit" << endl;
                cout << endl;
                bool isExit3 = false;
                char userInput;
                cin >> userInput;

                bool isExit = false;

                switch (userInput)
                {
                case '1':
                {
                    cmd.WriteGroup();
                }
                break;
                case'2':
                {
                    cout << "Enter group info!" << endl;
                    cout << "Name of group:" << endl;
                    cin >> group;
                    cout << "Num of group:" << endl;
                    cin >> numGroup;
                    cout << "Num of student:" << endl;
                    cin >> numStudent;
                    c = Group(group);

                    if (true)
                    {
                        cmd.AddGroup(c);
                    }
                    else
                    {
                        cout << "error" << endl;
                    }
                }
                break;
                
                case '9':
                {
                    isExit3 = true;
                    break;
                }
                default:
                {
                    cout << "try again" << endl;
                    cout << endl;
                }
                break;
                }

                if (isExit3)
                    break;
            }

        
        }
    
       
        break;
        case'4':
        {
            while (true)
            {


                cout << "1. Student" << endl;
                cout << "2. Applicant" << endl;
                cout << "3. Lector" << endl;
                cout << "4. People" << endl;
                cout << "#  Exit" << endl;
                bool isExit2 = false;
                char userInput2;
                cin >> userInput2;
                switch (userInput2)
                {
                case'1':
                {
                    while (true)
                    {
                        
                        cout << "A. Show students." << endl;
                        //cout << "B. Add" << endl;
                        cout << "E. Back." << endl;
                        char option1;
                        cin >> option1;
                        if (option1 == 'A')
                        {
                            //string n, l;
                            //cout << "LastName, FirstName, course";
                            //cin >> n, l;
                            //    Student st(n, l);
                            //    cmd.AddStudent(st);
                            cmd.WriteStudent();
                            cout << endl;
                        }
                        //else if (option1 == 'B')
                        //{
                        //    string n, l;
                        //    cout << "LastName, first name";
                        //    cin >>n,l;
                        //    Student st(n, l);
                        //    cmd.AddStudent(st);
                        //}
                        else if (option1 == 'E')
                        {
                            break;
                        }
                        cout << endl;
                    }
                    cout << endl;
                }
                break;
                case'2':
                {
                    while (true)
                    {
                        cout << "A.  Show applicants." << endl;
                        cout << "E.  Back." << endl;
                        char option1;
                        cin >> option1;
                        if (option1 == 'A')
                        {
                            cmd.WriteApplicant();
                            cout << endl;
                        }
                        if (option1 == 'E')
                        {
                            break;
                        }
                        cout << endl;
                    }

                    cout << endl;
                }
                break;
                case'3':
                {
                    while (true)
                    {
                        cout << "A.  Show lectors." << endl;
                        cout << "E.  Back." << endl;
                        char option1;
                        cin >> option1;
                        if (option1 == 'A')
                        {
                            cmd.WriteApplicant();
                            cout << endl;
                        }
                        if (option1 == 'E')
                        {
                            break;
                        }
                        cout << endl;
                    }
                    cout << endl;

                }
                break;
                case'4':
                {
                    while (true)
                    {
                        cout << "A.  Show people." << endl;
                        cout << "E.  Back." << endl;
                        char option1;
                        cin >> option1;
                        if (option1 == 'A')
                        {
                            cmd.WritePerson();
                            cout << endl;
                        }
                        else if (option1 == 'E')
                        {
                            break;
                        }
                        else
                            cout << endl;
                    }

                }
                break;
                case '#':
                {
                    isExit2 = true;
                    break;
                }
                default:
                {
                    cout << "try again" << endl;
                    cout << endl;
                }
                break;
                }

                if (isExit2)
                    break;





            }
        }
        break;
        case '0':
            isExit = true;
            break;

        default:
        {
            cout << "try again" << endl;
        }
        break;
        }

        if (isExit)
            break;

        cout << endl;
    }


}

int main()
{
    showMenu();
    return 0;
}