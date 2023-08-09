#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout << "Enter 3 number :"<< endl;
    cin>> num1>> num2>> num3 ;
    if (num1>num2 && num1>num3)
    {
        cout << "The large number is: num1"<< endl;
    }
    else if(num2>> num1 && num2>> num3 )
    {
        cout << "The large number is : num2"<< endl;
    }
    else
    {
        cout << "The large number is : num3"<< endl;
    }

    getch();
}
