#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int num1,num2;
    cout <<"Enter two number :\n";
    cin>> num1 >> num2;

    cout<< showpoint;
    cout<< fixed;
    cout<< setprecision(2);

    float sum = num1+num2;
    cout<<setw(20)<< "sum is : " <<sum;
    cout << endl;

    cout<< noshowpoint;

    float sub =num1-num2;
    cout<<setw(20)<<"subtraction is : " <<sub;
    cout << endl;

    float mul =num1 * num2;
    cout <<setw(20)<< "Multiplication is : " <<mul;
    cout << endl;

    double div = (float)num1 / num2;
    cout <<setw(20)<< "Division is : " <<div;
    cout << endl;

    float rem = num1%num2;
    cout <<setw(20)<< "Remainder is : " << rem;
    cout << endl;

    getch();
}

