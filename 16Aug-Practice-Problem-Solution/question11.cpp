#include <iostream>
using namespace std;
int main()
{
    float weight_water;
    cout << "enter weight of water" << "\n";
    cin >> weight_water;
    
    float initial_temprature;
    cout << "Enter initial temprature" << "\n";
    cin >> initial_temprature;

    float final_temprature;
    cout << "Enter final temprature" << "\n";
    cin >> final_temprature;

    float energy = weight_water * 
                    (final_temprature - initial_temprature) *
                        4184;
    cout << "The energy needed = " << energy << "\n";

    return 0;
}