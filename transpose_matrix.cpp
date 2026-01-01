#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/*
 * Algorithm Challenge – Level 3 | #7 Transpose a Matrix
 *
 * This program fills a 4x4 matrix with ordered numbers, prints it, then generates and prints its transpose.
 *
 * Matrix transposition is a fundamental operation in computer science and engineering, where rows become columns and columns become rows.
 *
 * This challenge emphasizes understanding data orientation and geometric transformation in two-dimensional arrays.
 */

// Fills a matrix with ordered sequential numbers
void FillMatrxWithOrderNums(int arr[4][4], short Rows, short Cols)
{
    short Counter = 0;

    for (short i = 0; i < Rows; i++) // Traverse rows
    {
        for (short j = 0; j < Cols; j++) // Traverse columns
        {
            Counter++;
            arr[i][j] = Counter; // Assign ordered value
        }
    }
}

// Generates the transpose of a matrix
void TransposeMatrix(int arr[4][4], int TransposedArr[4][4], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            // Swap row index with column index
            TransposedArr[i][j] = arr[j][i];
        }
    }
}

// Prints a matrix in a formatted layout
void PrintMatrix(int arr[4][4], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(2) << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[4][4];           // Original 4x4 matrix
    int TransposedArr[4][4]; // Transposed matrix

    FillMatrxWithOrderNums(arr, 4, 4);

    cout << "The following is a 4x4 Ordered Matrix:\n\n";
    PrintMatrix(arr, 4, 4);

    TransposeMatrix(arr, TransposedArr, 4, 4);

    cout << "\nThe following is the Transposed Matrix:\n\n";
    PrintMatrix(TransposedArr, 4, 4);

    return 0;
}
