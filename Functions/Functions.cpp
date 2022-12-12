#include <iostream>
#include "MyFunctions.h"

using namespace std;

// Variable declarations
double num1, num2, sum2; // Global variables

int main()
{
    // Ask user to enter two number and see the sum
    cout << "Enter two random numbers: ";
    cin >> num1;
    cin >> num2;
    output(); // Function call/invoking
    cout << "The sum of " << num1 << " and " << num2 << " is " << Add(num1, num2) << endl;
    cout << "The division of " << num1 << " and " << num2 << " is " << Division(num1, num2);
}