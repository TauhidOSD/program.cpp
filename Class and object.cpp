#include<iostream>
#include<conio.h>
using namespace std;

class student
{
public :
    int id;
    double gpa;

};

int main()
{
    student Alim, Suparna;

    Alim.id = 1017;
    Alim.gpa  = 3.96;
    cout<< Alim.id << " " <<Alim.gpa<<endl;

    Suparna.id = 1020;
    Suparna.gpa = 3.33;
    cout<<Suparna.id <<" "<<Suparna.gpa<<endl;
    getch();
}
