#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num2,num3,num4;
    char ch;

    cout << "Enter any two integer number:";
    cin>> num2 >> num3;
    int sum = num2+num3;
    int sub = num2-num3;
    int mul = num2*num3;
    int div = num2/num3;

    cout << "Calculation: ";
    cin >>ch;

    if(ch=='+')
    {
        cout<<sum;
    }
    else if(ch=='-')
    {
        cout<<sub;
    }
    else if(ch=='*')
    {
        cout<<mul;
    }
    else if(ch=='/')
    {
        cout<<div;
    }
    else
    {
        cout << "Your calculation is wrong";
    }




    getch();
}
