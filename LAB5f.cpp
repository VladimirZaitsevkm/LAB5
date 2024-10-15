#include <iostream>
#include <iomanip>
#include <array>
using namespace std;


double averageOfNegativeElements(int* arr, int size) {
    int countOfNegatives = 0, sumOfNegatives = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            countOfNegatives++;
            sumOfNegatives += arr[i];
        }
    }
    return (sumOfNegatives / countOfNegatives);
}


int main() {
    setlocale(LC_ALL, "Russian");
    int const k = 10, n = 10;
    int F[k]{1, -2, 3, -4, 5, -6, 7, -8, 9, -10}, G[n]{-1, 2, -3, 4, -5, 6, -7, 8, -9, 10};

    cout << "Сред.ариф. отрицательных чисел в массиве F: " << averageOfNegativeElements(F, k) << '\n';
    cout << "Сред.ариф. отрицательных чисел в массиве G: " << averageOfNegativeElements(G, n);
}