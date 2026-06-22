#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int grades[5];
    double average;

public:
    Student() : name(""), average(0.0) {
        for (int i = 0; i < 5; ++i) {
            grades[i] = 0;
        }
    }

    void inputData() {
        cout << "Введите имя студента: ";
        getline(cin, name);

        cout << "Введите 5 оценок через пробел: ";
        for (int i = 0; i < 5; ++i) {
            cin >> grades[i];
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += grades[i];
        }
        average = static_cast<double>(sum) / 5.0;
    }

    bool isExcellentStudent() const {
        return average > 4.5;
    }

    double getAverage() const {
        return average;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Student student;
    student.inputData();
    student.calculateAverage();

    cout << "Средний балл: " << student.getAverage() << endl;
    if (student.isExcellentStudent()) {
        cout << "Студент является отличником." << endl;
    } else {
        cout << "Студент не является отличником." << endl;
    }

    return 0;
}
