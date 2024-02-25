#include <iostream>
using namespace std;

/*
    У двовимірному масиві цілих чисел порахувати:

    Суму всіх елементів масиву;
    Середнє арифметичне всіх елементів масиву;
    Мінімальний елемент;
    Максимальний елемент.
*/

int main() {
    const int ROWS = 3, COLS = 3;
    int arr[ROWS][COLS] = {
            {9,2,3},
            {4,5,6},
            {7,8,1}
    };

    int sum = 0, minValue = arr[0][0], maxValue = arr[0][0];
    double averages = 0;


    for (int i = 0; i < ROWS; i++)
    {

        for (int j = 0; j < COLS; j++)
        {
            sum += arr[i][j];

            if (minValue > arr[i][j])
            {
                minValue = arr[i][j];
            } else if (maxValue < arr[i][j])
            {
                maxValue = arr[i][j];
            }

        }
    }

    averages = sum / (sizeof(arr) / sizeof(arr[0][0]));

    cout << "Sum: " << sum << endl;
    cout << "Averages: " << averages << endl;
    cout << "Min value: " << minValue << endl;
    cout << "Max value: " << maxValue << endl;

    return 0;
}
