#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"\t**Triangle**";
    cout<<"\n";
    cout<<"\n";

    double base,height,width, area1,area2,area3,radius,pai,circumference;


    cout << "Enter the base number : ";
    cin>> base;

    cout << "Enter the height number : ";
    cin>> height;

    area1 = (double)1/2 * base * height;
    cout<<"Area of triangle is :" << area1;
    cout<<"\n";
    cout<<"\n";
    cout << "\t**Rectangle**\n";
    cout<<"\n";

    cout << "Enter the width number : ";
    cin>> width;

    cout << "Enter the height number : ";
    cin>> height;

    area2 = (double)width * height;
    cout<<"Area of Rectangle is : " << area2;
    cout<<"\n"<<endl;
    cout<<"\t**circle**";
    cout<<"\n";
    cout<<"\n";


    cout << "Enter the radius number : ";
    cin>> radius;

    cout << "Enter the pai value : ";
    cin>> pai;

    area3 = pai * (double)radius* radius;
    circumference = 2 * pai * radius;

    cout<<"Area of circle is :" << area3 <<endl;

    cout<< "circumference is : " << circumference<<endl;



    getch();
}
