#include <iostream>
using namespace std;

int main() {
    const int rows = 3;      // Number of rows in the matrix
    const int columns = 3;   // Number of columns in the matrix
    int matrix[rows][columns]; // 2D array declaration

    //Take the values of the matrix from the user
    cout << "Enter the elements of the 3x3 matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    //Print the values of the matrix
    cout << "The matrix is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; // Move to the next line after each row
    }

    //Print the summation of each row
    cout << "Sum of each row:" << endl;
    for (int i{0}; i < rows; i++) {
        int rowSum {0}; // Initialize row sum
        for (int j{0}; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }

    //Print the product of each row
    cout << "Product of each row:" << endl;
    for (int i = 0; i < rows; i++) {
        int rowProduct = 1; // Initialize row product
        for (int j = 0; j < columns; j++) {
            rowProduct *= matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowProduct << endl;
    }

}