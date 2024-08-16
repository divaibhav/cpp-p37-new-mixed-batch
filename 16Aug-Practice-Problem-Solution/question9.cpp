#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the radius of circle" << "\n";
    int radius;
    cin >> radius;

    float area_of_circle = 3.14 * radius * radius;

    float perimeter_of_circle = 2 * 3.14 * radius;

    cout << "Area of Circle = " << area_of_circle << "\n";
    cout << "Perimeter of circle = " << perimeter_of_circle << "\n";

}
