#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int a, b;
    cout << "Введите два целых числа через пробел: ";
    if (!(cin >> a >> b)) {
        cout << "Ошибка ввода. Введите два целых числа." << "\n";
        return 1;
    }

    cout << "Сумма: " << (a + b) << "\n";
    cout << "Разность (a - b): " << (a - b) << "\n";
    cout << "Произведение: " << (a * b) << "\n";

    if (b == 0) {
        cout << "Частное: деление на 0 невозможно. " << "\n";
    } else {
        double d = static_cast<double>(a) / static_cast<double>(b);
        cout << "Частное: " << d << '\n';
    }

    return 0;
}
