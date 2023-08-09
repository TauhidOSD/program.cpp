#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public :
    int id;
    double gpa;

    void display()
    {
        cout << id <<" "<< gpa<<endl;

    }
    void setvalue(int x, double y)
    {

        id =x;
        gpa =y;
    }

};

int main()
{
    student alim,suporna;

    alim.setvalue(1017,3.40);
    alim.display();

    suporna.setvalue(1020,3.80);
    suporna.display();

    getch();
}
