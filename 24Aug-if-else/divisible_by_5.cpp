/*
WAP to accept a number from user, if the number is divisible by 5
print its is divisible by 5 otherwise print not divisible by 5.
*/
#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number " << "\n";
    cin >> number;

    if(number % 5 == 0){
        cout << "Number is divisible by 5" << "\n";
    }
    else
    {
        cout << "Number is not divisble by 5" << "\n";
    }
    return 0;
}