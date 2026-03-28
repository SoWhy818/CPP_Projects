#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "Введите три целых числа через пробел: ";
    if (!(cin >> a >> b >> c)) {
        cout << "Ошибка ввода. Введите три целых числа." << "\n";
        return 1;
    }

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    cout << "Самое большое число: " << max << "\n";

    return 0;
}