#include <iostream>
using namespace std;

int main() {
    string name;
    int num1, num2, sum;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello, " << name << "! Let's add two numbers." << endl;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << "." << endl;

    return 0;
}