/*
WAP to accept a number from user and check whether the gicen number 
is even or odd. If the number is even pritn even number otherwise
odd number.
*/
#include <iostream>
using namespace std;
int main()
{
    int number = 0;
    cout << "Enter a number" << "\n";
    cin >> number;
    //check whether the given number is even or odd
    if(number % 2 == 0){
        cout << "Even Number" << "\n";
    }
    else{
        cout << "Odd Number" << "\n";
    }
    return 0;
}