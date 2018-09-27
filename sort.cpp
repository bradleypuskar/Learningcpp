//sorting and loops

#include <iostream>

using namespace std;

int main() {
    
    // declarative variables
    int num1, num2, num3;
    
   for(int i=1; i <=6; i++)
   { 
       cout << "please enter 3 integers: ";
       cin >> num1 >> num2 >> num3;
    
    if (num1 <= num2 && num2 <=num3)
        cout << num1 << " " << num2 << " " << num3 << endl; 
    else if (num1 <= num3 && num3 <= num2)
        cout <<num1 << " " << num3 << " " << num2 << endl;
    else if (num2 <= num1 && num1 <= num3)
        cout <<num2 << " " << num1 << " " << num3 << endl;
    else if (num2 <= num3 && num3 <= num1)
        cout << num2 << " "<< num3 << " " << num1 << endl;
    else if (num3 <= num1 && num1 <= num2)
        cout << num3 << " " << num1 << " " << num2 << endl;
    else 
        cout << num3 << " " << num2 << " " << num1 << endl;
    }
