
#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
    double cels, farn;

    cout << "Enter Fahrenheit : " ;
    cin >> farn;


    cels = (farn - 32)/1.8 ;


    cout << "Celsius : " << cels <<endl;




    getch();
}
