/*
WAP to accept a number from user, if the number is greater than 100
print greater than 100, otherwise print less than 100.

WAP to accept a number from user, if the number is divisible by 5
print its is divisible by 5 otherwise print not divisible by 5.
*/
#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number" << "\n";
    cin >> number;

    if(number > 100)
    {
        cout << "Number is greater than 100" << "\n";
    }
    else
    {
        cout << "Number is less than 100" << "\n";
    }
    return 0;
}
