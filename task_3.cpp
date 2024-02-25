#include <iostream>
using namespace std;

/*
    Напишіть програму, в якій оголошується масив розміром 5х10 і масив розміром 5х5.
    Перший масив заповнюється випадковими числами у діапазоні від 0 до 50.
    Другий масив заповнюється за таким принципом: перший елемент другого масиву дорівнює сумі
    першого і другого елемента першого масиву, другий елемент другого масиву дорівнює сумі третього і
    четвертого елемента першого масиву.
*/

int main() {
    // for random numbers
    srand(time(0));
    int min = 0, max = 5;

    const int ROWS_FIRST = 5, COLS_FIRST = 10;
    const int ROWS_SECOND = 5, COLS_SECOND = 5;

    int firstArray[ROWS_FIRST][COLS_FIRST] = {};
    int secondArray[ROWS_SECOND][COLS_SECOND] = {};

    // fill the first array
    for (int i = 0; i < ROWS_FIRST; i++)
    {
        for (int j = 0; j < COLS_FIRST; j++) {
            firstArray[i][j] = rand() % (max - min) + min;
            cout << firstArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // fill the second array
    for (int i = 0; i < ROWS_SECOND; i++)
    {
        for (int j = 0; j < COLS_SECOND; j++) {
            secondArray[i][j] = firstArray[i][j*2] + firstArray[i][j*2+1];
            cout << secondArray[i][j] << " ";
        }
        cout << endl;
    }
}
