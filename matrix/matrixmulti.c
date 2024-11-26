// // //matrix multiplication
// // #include<stdio.h>
// // void multiplymat(int fidstmatrix[100][100],int secondmatrix[100][100],int result[100][100],int rowfirst,int colfirst,int rowsecond,int colsecond)
// //  {
// //    for(int i=0;i<rowfirst;i++)
// //    {
// //       for(int j=0;j<colfirst;j++)
// //       {
// //          result[i][j]=0;
// //       }
// //    }
// //    for(int i=0;i<rowsecond;i++)
// //    {
// //       for(int j=0;j<colsecond;j++)
// //       {
// //          for(int k=0;k<colfirst;k++)
// //          {
// //             result[i][j]+=fidstmatrix[i][k]* secondmatrix[k][j];
// //          }
// //       }
// //    }
// //  }
// //   void input(int matrix[100][100],int row,int column)
// //   {
// //    printf("Enter the element of the matrix (%d*%d :)\n",row,column);
// //    for(int i=0;i<row;i++)
// //    {
// //       for(int j=0;j<column;j++)
// //       {
// //          scanf("%d",&matrix[i][j]);
// //       }
// //    }
// //   }
// //   void display(int matrix[100][100], int row, int col)
// //   {
// //    for(int i=0;i<row;i++)
// //    {
// //       for(int j=0;j<col;j++)
// //       {
// //          printf("%d" ,matrix[i][j]);
// //       }
// //       printf("\n");
// //    }
// //   }
// // int main()
// // {
// //     int firstMatrix[100][100], secondMatrix[100][100], result[100][100];
// //     int rowFirst, colFirst, rowSecond, colSecond;

// //     printf("Enter rows and columns for the first matrix: ");
// //     scanf("%d %d", &rowFirst, &colFirst);

// //     printf("Enter rows and columns for the second matrix: ");
// //     scanf("%d %d", &rowSecond, &colSecond);

// //     if (colFirst != rowSecond) {
// //         printf("Multiplication not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
// //         return 1;
// //     }
// //     input(firstMatrix,rowFirst,colFirst);
// //     input(secondMatrix,rowSecond,colSecond);

// //     multiplymat(firstMatrix,secondMatrix,result,rowFirst,colFirst,rowSecond,colSecond);
// //    printf("Result of matrix multiplication:\n");
// //     display(result,rowFirst,colSecond);
// //    return 0;
// // }

#include <stdio.h>

#define MAX_SIZE 10

void multiplyMatrices(int firstMatrix[MAX_SIZE][MAX_SIZE], int secondMatrix[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowFirst, int colFirst, int rowSecond, int colSecond) {
    for (int i = 0; i < rowFirst; ++i) {
        for (int j = 0; j < colSecond; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < colFirst; ++k) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int row, int col) {
    printf("Enter the elements of the matrix (%d x %d):\n", row, col);

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int row, int col) {
    printf("Matrix:\n");

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void distranspose(int matrix[MAX_SIZE][MAX_SIZE], int transpose[MAX_SIZE][MAX_SIZE],int row, int col)
{
   for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
           transpose[j][i]=matrix[i][j];
            printf("%d ", transpose[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int rowFirst, colFirst, rowSecond, colSecond;

    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);

    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    if (colFirst != rowSecond) {
        printf("Multiplication not possible. Number of columns in the first matrix should be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int firstMatrix[MAX_SIZE][MAX_SIZE], secondMatrix[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE], transpose[MAX_SIZE][MAX_SIZE];

    // Input matrices
    inputMatrix(firstMatrix, rowFirst, colFirst);
    inputMatrix(secondMatrix, rowSecond, colSecond);

    // Multiply matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, rowFirst, colFirst, rowSecond, colSecond);

    // Display result matrix
    printf("Result of matrix multiplication:\n");
    displayMatrix(result, rowFirst, colSecond);
    
    //transpose
    printf("transpose of the matrix is:\n");
    distranspose(result,transpose,rowFirst,colSecond);

    return 0;
}

 