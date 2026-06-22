#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    int limit = static_cast<int>(sqrt(x));
    for (int i = 5; i <= limit; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите N: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Некорректное значение N." << endl;
        return 1;
    }

    if (n == 1) {
        cout << "1-е простое число: 2" << endl;
        return 0;
    }

    int count = 0;
    int num = 1;

    while (count < n) {
        num++;
        if (isPrime(num)) {
            count++;
        }
    }

    cout << n << "-е простое число: " << num << endl;
    return 0;
}

