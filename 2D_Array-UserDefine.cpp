#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[2][3];
    cout << "Enter the element for the matris" <<endl;
    for(int row =0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {
            cout<< "A["<<row<<"]["<<col<<"] = ";
            cin>>A[row][col];
        }
    }
//printing 2d array
    for(int row=0; row<2; row++)
    {
        for(int col=0; col<3; col++)
        {

            cout << A[row][col]<<" ";
        }
        cout<< endl;
    }
    getch();
}
