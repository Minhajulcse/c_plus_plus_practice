#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()

{

    float num1, num2;

    cout<< "Enter 1st integer number = ";
    cin >> num1;
    cout <<endl;

    cout<< "Enter 2nd integer number = ";
    cin >> num2;
    cout <<endl;


    cout<<setw(20) <<"First Number = " <<num1 <<endl;
    cout<<setw(20) <<"Second Number = " <<num2 <<endl;


    cout<<showpoint;
    float sum = num1 + num2;
    cout<<setw(20) << "Sum is = "<<sum;
    cout <<endl;
