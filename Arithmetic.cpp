#include <iostream>
#include <conio.h>
using namespace std;

int main ()

{

    int num1, num2;

    cout<< "Enter 1st integer number = ";
    cin >> num1;
    cout <<endl;

    cout<< "Enter 2nd integer number = ";
    cin >> num2;
    cout <<endl;


    cout <<"First Number = " <<num1 <<endl;
    cout <<"Second Number = " <<num2 <<endl;


    int sum = num1 + num2;
    cout << " Sum is = "<<sum;
    cout <<endl;


    int sub = num1 - num2;
    cout << " Sub is = "<<sub;
    cout <<endl;

    int mul = num1 * num2;
    cout << " Multiplication is = "<<mul;
    cout <<endl;

    double div = (float) num1 / num2;
    cout << " Devision is = "<<div;
    cout <<endl;

    double rem =  num1 % num2;
    cout << " Remainder is = "<<rem;
    cout <<endl;



    getch();
}
