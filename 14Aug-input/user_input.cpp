#include <iostream>
using namespace std;
int main()
{
    //step 1 declare varibale to store the value, 
    // coming from user
    int roll_number;
    
    //step2 : prompt the user to enter value
    cout << "Enter your roll number" << "\n";

    //step 3: use cin to get the value and save it 
    //into the declared variable
    cin >> roll_number;

    cout << "your roll number is " << roll_number << "\n";
    // Roll Number =
    cout << "Roll Number = " << roll_number << "\n";
}