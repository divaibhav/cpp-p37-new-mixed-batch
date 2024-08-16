#include <iostream>
using namespace std;
int main()
{
    cout << "Enter an integer number" << "\n";
    int number1;
    cin >> number1;

    cout << "Enter an integer number" << "\n";
    int number2;
    cin >> number2;

    cout << "Enter an integer number" << "\n";
    int number3;
    cin >> number3;

    int sum = number1 + number2;
    int subtraction = number3 - sum;

    cout << "Sum = " << sum << "\n";
    cout << "Subtraction = " << subtraction << "\n";