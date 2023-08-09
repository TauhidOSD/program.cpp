#include<iostream>
#include<conio.h>
using namespace std;
void sum (int p,int q)
{
    int add =p+q;
    cout<<"The sum is"<<endl;
    cout <<add<<endl;
}
void sum(int p,int x,int z)
{

    int add =p+x+z;
    cout<<"The sum is"<<endl;
    cout<< add<<endl;
}
void sum(int p,float q){

float add=(float)p+q;
cout<<"The sum is"<<endl;
cout<<add<<endl;
}

int main()
{
    sum(10,20);
    sum(10,20,30);
    sum(10.5,20);
    getch();
}
