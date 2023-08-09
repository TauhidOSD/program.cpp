#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double fahrenheit,celsius;

    cout<<"\t celsius to fahrenheit \n";

    cout << "Enter the celsius :";
    cin>> celsius;
    fahrenheit = 1.8 * celsius + 32;
    cout << "The fahrenheit is = "<<fahrenheit<< endl;

    cout<<"\t fahrenheit to celsius \n";

    cout << "Enter the fahrenheit :";
    cin>> fahrenheit;
    fahrenheit = (fahrenheit - 32) * 1.8;
    cout << "The celsius is = "<<celsius<< endl;

    getch();
}
