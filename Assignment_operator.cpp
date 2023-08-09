#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;
    x =5;
    y =3;

    x +=y; // x= x+y
    cout << "sum = "<< x << endl;

    x -=y; // x = x-y
    cout << "subtruct = " << x << endl;

    x *=y; // x= x * y
    cout << "Multipl = " << x << endl;

    x /=y; // x =x/y
    cout << "Division = " << x << endl;

    getch();
}
