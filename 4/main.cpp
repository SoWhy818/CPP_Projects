#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите два числа через пробел: ";
    if (!(cin >> a >> b)) {
        cout << "Ошибка ввода. Введите два числа." << "\n";
        return 1;
    }

    float perimeter = 2 * (a + b);
    float area = a * b;

    cout << "Периметр = " << perimeter << "\n";
    cout << "Площадь = " << area << "\n";

    return 0;
}