#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mark1;
    cout << "Enter the mark of Raha:"<< endl;
    cin>> mark1;
    if(mark1 >100)
    {
        cout << "Invalid";
    }
    else if(mark1 <0)
    {
        cout << "Invalid";
    }
    else if(mark1 >=80)
    {
        cout << "A+";
    }
    else if(mark1 >=70)
    {
        cout << "A";
    }
    else if(mark1 >=60)
    {
        cout << "A-";
    }
    else if(mark1 >=50)
    {
        cout << "B";
    }
    else if(mark1 >=40)
    {
        cout << "C";
    }
    else if(mark1 >=33)
    {
        cout << "D";
    }
    else
    {
        cout << "Fail" << endl;
        cout<< "Best of luck for next Time";
    }
      /*int mark2;
    cout << "Enter the mark of Ruksana:"<< endl;
    cin>> mark2;
    if(mark2 >100)
    {
        cout << "Invalid";
    }
    else if(mark2 <0)
    {
        cout << "Invalid";
    }
    else if(mark2 >=80)
    {
        cout << "A+";
    }
    else if(mark2 >=70)
    {
        cout << "A";
    }
    else if(mark2 >=60)
    {
        cout << "A-";
    }
    else if(mark2 >=50)
    {
        cout << "B";
    }
    else if(mark2 >=40)
    {
        cout << "C";
    }
    else if(mark2 >=33)
    {
        cout << "D";
    }
    else
    {
        cout << "Fail" << endl;
        cout<< "Best of luck for next Time";
    } */
    getch();
}
