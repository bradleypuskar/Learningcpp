// preprocessor
#include <iostream>

// namespace std allows you to use cout and cin
using namespace std;

// main function
int main() {
    // Write your main here
    // declaring variables
    double number;
    int roundedNumber;
    // executable statements 
    cout<< "Please enter a decimal number: ";
    cin >> number;
    roundedNumber = number + 0.5;
    cout << number << "rounded us " << roundedNumber << endl;
    return 0;
}
