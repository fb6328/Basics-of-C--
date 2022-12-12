#include <iostream>
#include <MyFunctions.h>
using namespace std;

int main()
{
    int num1, num2, summation;
    cout << "Enter two number to see the sum: " << endl;
    cin >> num1;
    cin >> num2;
    summation = Addition(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is " << summation;
    return 0;
}
