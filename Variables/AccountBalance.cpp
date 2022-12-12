#include <iostream>
#include <string>
using namespace std;
int main()
{
    float save;
    int wk = 1;
    cout << "Enter a week to see the amount to save: ";
    cin >> wk;
    if (wk >= 0 && wk <= 52)
    {
        cout << "You will save " << wk * 50 << " in week " << wk;
    }
    else
    {
        cout << "Invalid input. \n";
        cout << "Enter a week between 0 and 52 to see the amount to save: ";
        cin >> wk;
        if (wk >= 0 && wk <= 52)
        {
            cout << "You will save " << wk * 50 << " in week " << wk;
        }
    }
}
