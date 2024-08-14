/*
WAP to accept two numbers from user. Calculate and 
print the sum of two numbers on console
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "enter number 1" << "\n";
    int number1;
    cin >> number1;

    cout << "enter number2" << "\n";
    int number2;
    cin >> number2;

    int sum = number1 + number2;

    cout << "Sum = " << sum << "\n";
    // Sum of 786 and 14 is 800
    cout << "Sum of " << number1
    << " and " << number2 << " is " << sum << "\n"; 

    // Sum of number 1 = 786 and number2 =  14 is sum = 800

    cout << "Sum of number1 = " << number1
    << " and number2 = " << number2 << " is sum = " << sum << "\n"; 

}