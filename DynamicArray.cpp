#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // Input validation for rows
    do {
    cout << "Enter number of rows (1 - 3): ";
    cin >> rows;

    if (cin.fail()) {
        cin.clear(); // reset error state
        cin.ignore(1000, '\n'); // discard invalid input
        cout << "Invalid input. Please enter a number.\n";
        continue;
    }

    if (rows < 1 || rows > 3) {
        cout << "Invalid input. Rows must be between 1 and 3.\n";
    }

} while (rows < 1 || rows > 3);

    // Input validation for columns
    do {
    cout << "Enter number of columns (1 - 3): ";
    cin >> cols;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Invalid input. Please enter a number.\n";
        continue;
    }

    if (cols < 1 || cols > 3) {
        cout << "Invalid input. Columns must be between 1 and 3.\n";
    }

} while (cols < 1 || cols > 3);

    // Dynamically allocate 2D array
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // Assign values using nested loops
    cout << "\nEnter values for the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output values using nested loops
    cout << "\nArray values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}