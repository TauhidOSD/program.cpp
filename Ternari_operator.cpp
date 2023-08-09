#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num;
    num1 =30;
    num2 =40;
    cout << "Enter two int number :"<< endl;
    cin>> num1>> num2;
    int max = (num1>num2) ?  num1 : num2;
    cout <<"The maximum value is: " ;
    cout << max<< endl;

    cout << "Enter any int mumber :"<< endl;
    cin>> num;
    (num%2==0)? cout << num<< "is Even" :cout << num<< "is Odd";

    getch();
}












