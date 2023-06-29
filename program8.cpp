#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
    double cels, farn;

    cout << "Enter Celsius : " ;
    cin >> cels;


    farn = 1.8 * cels + 32 ;


    cout << "Fahrenheit : " << farn <<endl;




    getch();
}
