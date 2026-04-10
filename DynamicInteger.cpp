#include <iostream>
#include <string>
using namespace std;

int main() {

    // Dynamically allocate integer and string
    int* number = new int;
    string* text = new string;

    // Input for integer
    cout << "Enter your number: ";
    cin >> *number;

    // Clear input buffer before reading string
    cin.ignore();

    // Input for string
    cout << "Enter your name: ";
    getline(cin, *text);


    cout << *text << ", the number you entered is: " << *number << endl;

    delete number;
    delete text;

    return 0;
}