#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int seconds;
    cout << "Введите количество секунд: ";
    if (!(cin >> seconds)) {
        return 0;
    }

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    
    cout << "Полных часов: " << hours << "\n";
    cout << "Полных минут: " << minutes << "\n";

    return 0;
}