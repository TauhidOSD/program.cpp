#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    while(1)
    {
        int randomNumber,guessNumber;
        cout <<"Enter your guess between 1 to 5: ";
        cin>> guessNumber;
        randomNumber = rand()%5+2;
        if(guessNumber==randomNumber)
        {
            cout<<"You have won"<<endl<<endl;
        }
        else
        {
            cout <<"you have lost.try again " <<endl;
            cout<<"Random number was : "<<randomNumber<<endl<<endl;
        }
    }
    getch();
}
