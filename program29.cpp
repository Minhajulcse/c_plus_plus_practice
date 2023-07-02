#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num1,num2;
    cout << "Enter ant two integer number: ";
    cin >> num1 >> num2;

    cout <<endl;

    int max = (num1>num2) ? num1 : num2;
    cout << "Large Number is "<<max;


    getch();
}
