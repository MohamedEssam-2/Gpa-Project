#include <iostream>
#include <fstream>
#include <string> 

using namespace std;

void write(float, string, string, int) ;

void read(float, string, string);


int main()
{

    float total = 0;
    float gpa = 0;
    int id;
    string firstname, lastname;





    cout << "Enter your name \n";
    cout << "\n";
    cin >> firstname >> lastname;

    cout << "\n";

    cout << "Enter your id\n ";
    cout << "\n";
    cin >> id;

    cout << " \n";
    cout << "======================" << endl;
    cout << "\n";


    float degrees[20]{};


    for (int x = 0; x < 20; x++)
    {
        cout << "Enter grade for subject " << x + 1 << ": ";

        cout << "\n";

        cin >> degrees[x];

        cout << "\n";

        if (degrees[x] >96 && degrees[x] <= 100)
        {
            cout << "\n";
            cout << "Your grade is { A+ }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }
        else if (degrees[x] >92 && degrees[x] <=96)
        {
            cout << "\n";
            cout << "Your grade is { A }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }
        else if (degrees[x] > 89 && degrees[x] <= 92)
        {
            cout << "\n";
            cout << "Your grade is { A- }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }
        else if (degrees[x] > 86 && degrees[x] <= 89)
        {
            cout << "\n";
            cout << "Your grade is { B+ }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] > 82 && degrees[x] <= 86)
        {
            cout << "\n";
            cout << "Your grade is { B }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] > 79 && degrees[x] <= 82)
        {
            cout << "\n";
            cout << "Your grade is { B- }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] > 76 && degrees[x] <= 79)
        {
            cout << "\n";
            cout << "Your grade is { C+ }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] > 72 && degrees[x] <= 76)
        {
            cout << "\n";
            cout << "Your grade is { C }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] > 69 && degrees[x] <=72)
        {
            cout << "\n";
            cout << "Your grade is { C- }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] > 66 && degrees[x] <=69)
        {
            cout << "\n";
            cout << "Your grade is { D+ }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] >= 65 && degrees[x] <= 66)
        {
            cout << "\n";
            cout << "Your grade is { D }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }

        else if (degrees[x] < 65 )
        {
            cout << "\n";
            cout << "Your grade is { F }" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
        }


        else
        {
            cout << "\n";
            cout << "ERROR" << endl;
            cout << "\n";
            cout << "================================================================================================" << endl;
            break;
        }



        total += degrees[x];

    }



    cout << "\n";

    gpa = (total / 2000) * 4;

    cout << "Your GPA= " << gpa << endl;
    cout << "================================================================================================" << endl;
    cout << "\n";


    write(gpa, firstname, lastname, id);

     read(gpa, firstname, lastname);


    return 0;

}
void write(float gpa, string firstname, string lastname , int id )
{
    ofstream write;

    write.open("Gpa.txt");

    write << firstname;

    write << " ";

    write << lastname;

    write << "\n";
    write << "\n";
    write << id; 
    write << "\n";
    write << gpa;
    write << "\n";
    write.close();

}
void read(float gpa, string firstname, string lastname)
{
    ifstream read; 

    read.open("Gpa.txt");

      string first, last; 
      float Gpa; 
      int  ID;
    read >>first;
    read >> last; 
    read >> ID; 
    read >> Gpa; 
    cout << "your name is : " << first;
    cout << " ";
    cout << last <<"\n";
    cout << "\n";
    cout << "your id ="<<ID;
    cout << "\n";
    cout << "\n";
    cout << "the gpa from the file =" << Gpa;
    cout << "\n";
     read.close();





}