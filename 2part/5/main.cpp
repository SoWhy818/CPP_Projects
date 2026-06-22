#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(const string &s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

string toBinary(int x) {
    if (x == 0) return "0";
    string result;
    unsigned int u = static_cast<unsigned int>(x);
    while (u > 0) {
        result.push_back((u & 1) ? '1' : '0');
        u >>= 1;
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите A и B: ";
    if (!(cin >> A >> B)) {
        cout << "Некорректный ввод." << endl;
        return 1;
    }

    if (A > B) swap(A, B);

    bool found = false;
    for (int x = A; x <= B; ++x) {
        if (x < 0) continue;
        string dec = to_string(x);
        string bin = toBinary(x);
        if (dec.size() > 1 && dec[0] == '0') continue;
        if (bin.size() > 1 && bin[0] == '0') continue;
        if (isPalindrome(dec) && isPalindrome(bin)) {
            cout << x << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Нет чисел, удовлетворяющих условию." << endl;
    }

    return 0;
}
