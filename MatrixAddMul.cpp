//Mansi Kulkarni
//ENTC B1
//23070123082

#include <iostream>
using namespace std;

int main() {
    int rows, cols, i, j;
    cout << "Enter number of rows and columns for the matrices: "; //input dimensions
    cin >> rows>> cols;
    int matrix1[rows][cols]; //declaring array
    cout << "Enter elements of first matrix:" << endl; //input matrix 1
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Enter element [" << i + 1 << "," << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }
    int matrix2[rows][cols];
    cout << "Enter elements of second matrix:" << endl; //input matrix 2
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << "Enter element [" << i + 1 << "," << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }
    cout << "Addition of Matrices:" << endl; //printing addition matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            cout << matrix1[i][j]+matrix2[i][j] << " ";
            if (j == cols - 1)
                cout << endl;
        }
    }
    cout<<"Multiplcication of Matrices: "<<endl;     //printing multiplication matrix
    if(rows!=cols){
        cout<<"Rows and Columns don't match, multiplication not possible";
    } else{
    // declaring the multiplication matrix as zero 
    int mult[rows][cols], k;
    for(i = 0; i < rows; ++i)
        for(j = 0; j < cols; ++j)
        {
            mult[i][j]=0;
        }
    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < rows; ++i)
        for(j = 0; j < cols; ++j)
            for(k = 0; k < cols; ++k)
            {
                mult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
    // Displaying the multiplication of two matrix.
    for(i = 0; i < rows; ++i)
    for(j = 0; j < cols; ++j)
    {
        cout << " " << mult[i][j];
        if(j == cols-1)
            cout << endl;
    }
    }
    return 0;
}
