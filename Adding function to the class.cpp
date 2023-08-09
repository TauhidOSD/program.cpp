#include<iostream>
#include<conio.h>
using namespace std ;
class student{
 public :
     int id;
     double gpa;
     void display (){

     cout << id<< " "<<gpa<<endl;
     }

};

int main(){
student Alim,suporna,raha;
Alim.id =1017;
Alim.gpa =3.48;
Alim.display();

suporna.id =1018;
suporna.gpa =3.44;
suporna.display();

raha.id =1020;
raha.gpa =3.50;
raha.display();

getch();
}
