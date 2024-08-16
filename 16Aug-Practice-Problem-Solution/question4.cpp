#include <iostream>
using namespace std;
int main()
{
    //step1 - accept numerator
    cout << "Enter the numerator" << "\n";
    float numerator;
    cin >> numerator;

    //step2 - accept denominator
    cout << "enter the denominator" << "\n";
    float denominator;
    cin >> denominator;

    //step3 - perform division
    float quotient = numerator / denominator;

    //step4 - print output
    cout << "Quotient = " << quotient << "\n";
}