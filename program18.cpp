#include<iostream>
#include<conio.h>
using namespace std;

int main()
{


    int num1,num2;
    cout << "Enter two integer number : ";
    cin >> num1 >> num2;

    if(num1>num2)
    {
        cout << "Large Number:" <<num1;
    }

    else if(num1==num2)
    {
        cout<< "Both are equal";
    }
    else
    {
        cout << "Large Number:" <<num2;
    }



    getch();
}

