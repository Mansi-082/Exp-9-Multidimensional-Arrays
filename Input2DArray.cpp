//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;
    // Take input for number of rows and columns
    cout << "Enter number of rows and columns: ";
    cin >> rows>> cols;
    int matrix[rows][cols]; //declaring array
    //input elements of array
    cout << "Enter elements of matrix:" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Enter element [" << i + 1 << "," << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
    //printing array
    cout << "Entered Matrix:" << endl;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
            if (j == cols - 1)
                cout << endl;
        }
    }
    return 0;
}
