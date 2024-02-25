#include <iostream>
using namespace std;

/*
    У двовимірному масиві цілих чисел порахувати суму елементів:

    У кожному рядку;
    У кожному стовпчику;
    Одночасно по всіх рядках і всіх стовпцях.
*/

int main() {
    const int ROWS = 3, COLS = 4;
    int arr[ROWS][COLS] = {
            {3, 5, 6, 7},
            {12, 1, 1, 1},
            {0, 7, 12, 1}
    };

    int sum = 0, sumRows, sumCols;

    // for rows
    for (int i = 0; i < ROWS; i++)
    {
        sumRows = 0;
        for (int j = 0; j < COLS; j++)
        {
            sumRows += arr[i][j];
            cout << arr[i][j] << " ";
        }
        // add sum rows in common sum
        sum += sumRows;
        cout << "| " << sumRows << endl;
    }

    cout << "----------------" << endl;
    // for rows
    for (int j = 0; j < COLS; j++)
    {
        sumCols = 0;
        for (int i = 0; i < ROWS; i++)
        {
            sumCols += arr[i][j];
        }
        // add sum cols in common sum
        sum += sumCols;
        cout << sumCols << " ";
    }
    cout << "| " << sum;






    return 0;
}
