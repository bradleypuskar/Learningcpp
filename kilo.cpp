#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
    double kilogram;
    double pounds;
    cout << "what is your weight? " ;
    cin >> pounds;
    cout << endl;
    
    cout << fixed << showpoint << setprecision(2);
    kilogram = pounds * 2.2;
    cout << kilogram << endl; 
    
    
    
    // Write your main here
    return 0;
}
