#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int i = 1; i<=30; i++)
    {
        if (i==10 ||i==12 || i==14)
        {
            continue;

    }
        if(i>20){
            break;
        }
    cout << i << endl;

}
getch();
}
