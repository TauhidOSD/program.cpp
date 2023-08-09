#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the letter: ";
    cin>> ch;
    ch =tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'/*||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')*/)
    {
        cout<< "This is vowel"<< endl;
    }
    else
    {
        cout<< "This is consonant"<< endl;
    }
    getch();
}
