#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number " << "\n";
    int number1;
    cin >> number1;

    cout << "Enter number " << "\n";
    int number2;
    cin >> number2;

    cout << "Enter number " << "\n";
    int number3;
    cin >> number3;

    cout << "Enter number " << "\n";
    int number4;
    cin >> number4;

    cout << "Enter number " << "\n";
    int number5;
    cin >> number5;

    int result = number1 + number2 - number3 * number4 / number5 ;

    cout << number1 << " + " 
            << number2 << " - "
            << number3 << " * " 
            << number4 << " / "
            << number5 << " = "
            << result << "\n";

    

}