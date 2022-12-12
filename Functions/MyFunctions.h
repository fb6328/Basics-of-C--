#include <iostream>
using namespace std;

// ouput function to print some text on screen when caaled
void output() // Function definition. Has no returntype hence void
{
    cout << "I am really enjoying C++.";
    cout << "Can we extend the semester?" << endl;
}

// Add function to return sum of two numbers
double Add(double a, double b)
{
    int sum = a + b;
    return sum;
}

// Funtion to return division of two number
double Division(double a, double b)
{
    return a / b;
}
