#include<iostream>
#include<vector>
using namespace std;

// print matrix

void printMatrix(const vector<vector<double>> & matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

//gueess method

// Function to find the inverse of a 2x2 matrix
vector<vector<double>> inverseMatrix(const vector<vector<double>> & matrix) {
    double determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    vector<vector<double>> inverse(2, vector<double>(2));
    // Calculate the elements of the inverse matrix
    inverse[0][0] = matrix[1][1] / determinant;
    inverse[0][1] = -matrix[0][1] / determinant;
    inverse[1][0] = -matrix[1][0] / determinant;
    inverse[1][1] = matrix[0][0] / determinant;
    return inverse;
}

int main()
{
    vector<vector<double>> matrix = {{2, 1}, {5, 3}}; // Example matrix

    cout << "Original matrix:" << endl;
    printMatrix(matrix);

    vector<vector<double>> inverse = inverseMatrix(matrix);

    cout << "\nInverse matrix:" << endl;
    printMatrix(inverse);

    return 0;
}
