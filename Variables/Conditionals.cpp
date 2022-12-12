#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Declare variables
    int age;
    string name, interest;
    // Capture child name
    cout << "Enter child's name: ";
    getline(cin, name);

    // Capture child age
    cout << "Enter " + name + "'s age: ";
    cin >> age;

    // Check conditions as per the instructions given
    if (age >= 4 && age <= 10)
    {
        // Capture child interest
        cout << "Enter " + name + "'s interest: ";
        cin >> interest;
        // Inner if statements
        if (interest == "soccer")
        {
            cout << name + " is assigned to Soccer Playgroup";
        }
        if (interest == "art")
        {
            cout << name + " is assigned to Art Playgroup";
        }
        else
        {
            cout << name + " is assigned to Other Playgroup";
        }
    }
    else
    {
        cout << "Invalid age. " + name + " is not qualified";
    }
}