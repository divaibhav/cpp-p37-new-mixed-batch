/*
WAP to check whether the given number is divisble by 5,
if yes print divisible by 5. Otherwise give the number that
will be added to the input number, so it can become divisble by 5
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
        int remainder = number % 5;
        int result = 5 - remainder;
        cout << "Add " << result 
        << " to number, to make it divisble by 5" << "\n";
    }
    return 0;
}