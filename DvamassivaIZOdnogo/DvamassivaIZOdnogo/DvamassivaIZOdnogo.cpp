#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0));

    const int size = 20;
    int arr[size];
    for (int i = 0; i < size; i++) arr[i] = -10 + rand() % 21;
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    int neg[size], pos[size];
    int negCount = 0, posCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) neg[negCount++] = arr[i];
        else if (arr[i] > 0) pos[posCount++] = arr[i];
    }

    cout << "Отрицательные: ";
    for (int i = 0; i < negCount; i++) cout << neg[i] << " ";
    cout << endl;

    cout << "Положительные: ";
    for (int i = 0; i < posCount; i++) cout << pos[i] << " ";
    cout << endl;

    return 0;
}
