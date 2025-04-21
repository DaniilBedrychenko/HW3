#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU-UA");



     // завдання 1

    int num;
    do {
        cout << "введіть число для обчислення суми: ";
        cin >> num;
        if (num < 1) {
            cout << "число має бути більше або дорівнювати 1.\n";
        }
    } while (num < 1);

    int sum = 0;
    for (int i = 0; i <= num; i++) {
        sum += i;
    }
    cout << "сума чисел від 0 до " << num << " = " << sum << endl;

    // завдання 2
    do {
        cout << "введіть число для обчислення факторіалу: ";
        cin >> num;
        if (num < 1) {
            cout << "число має бути більше або дорівнювати 1.\n";
        }
    } while (num < 1);

    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    cout << "факторіал числа " << num << " = " << fact << endl;

    // завдання 3
    do {
        cout << "введіть число для таблиці множення: ";
        cin >> num;
        if (num < 1) {
            cout << "число має бути більше або дорівнювати 1.\n";
        }
    } while (num < 1);

    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }

    // завдання 4
    do {
        cout << "введіть ширину горизонтальної лінії: ";
        cin >> num;
        if (num < 1) {
            cout << "ширина має бути більше або дорівнювати 1.\n";
        }
    } while (num < 1);

    for (int i = 0; i < num; i++) {
        cout << "=";
    }
    cout << endl;

    // завдання 5
    do {
        cout << "введіть висоту вертикальної лінії: ";
        cin >> num;
        if (num < 1) {
            cout << "висота має бути більше або дорівнювати 1.\n";
        }
    } while (num < 1);

    for (int i = 0; i < num; i++) {
        cout << "|" << endl;
    }

    // Завдання 7

    for (int i = 1; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }




    // Завдання 8
   
    for (int i = 1; i < 11; i++) {
        for (int j = 1; j < 11; j++) {
            cout << i * j << "\t";
        }
        cout << endl;
    }
    return 0;
}
