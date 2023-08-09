#include<iostream>
#include<conio.h>
using namespace std;
void addition(int,int);
void multiplication(int,int);
void subtruction(int,int);
void divisior(int,int);
int main()
{
    addition(2,4);
    multiplication(3,3);
    subtruction(12,4);
    divisior(10,3);
    getch;
}
void addition(int a,int b)
{
    int sum=a+b;
    cout << "Sum is : "<< sum<<endl;

}
void multiplication(int a,int b)
{

    int multiplication = a*b;
    cout << "multiplication is = "<<multiplication<<endl;
}
void subtruction(int a,int b)
{
    int subtruction =a-b;
    cout << "subtruction is = "<<subtruction<<endl;
}
void divisior(int a,int b)
{
    float divisior= (float)a/b;
    cout << "Divisor is = "<<divisior<< endl;
}
