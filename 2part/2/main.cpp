#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите количество элементов в массиве: ";
    cin >> n;

    if (n <= 0) {
        cout << "Количество элементов должно быть больше нуля." << endl;
        return 1;
    }

    vector<int> arr(n);
    cout << "Введите " << n << " элементов массива:" << "\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}