#include<iostream>
#include<conio.h>
using namespace std;
int addition(int,int);
int multiplication(int,int);
float divisor(int,int);
int main()
{
    cout << "Addition is = "<<addition(10,3)<<endl;
    cout<< "multiplication is = "<<multiplication(2,4)<<endl;
    cout<< "divisor is = "<<divisor(10,4)<<endl;
    getch();
}
int addition(int a,int b)
{

    int sum= a+b;
    return sum;
}

int multiplication(int a,int b)
{
    int multiplication =a*b;
    return multiplication;
}

float divisor (int a,int b)
{
    float divisor =(float)a/b;
    return divisor;

}
