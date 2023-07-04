#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int m,n;
    cout << "Enter any two integer number: ";
    cin >> m >> n;
    int sum = m+n;

    if(sum>0)
    {
        if(sum%2==0)
        {
            cout << "Even";
        }
        cout <<endl;
        cout << "Positive";
    }
    else
    {
        cout << "Negative";
    }


    getch();
}
