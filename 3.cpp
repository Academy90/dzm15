#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "3" << endl;
    int number;
    cout << "Введіть тризначне число (100-999): ";
    cin >> number;
    if (number < 100 || number > 999) {
        cout << "Помилка: число має бути від 100 до 999." << endl;
        return 0;
    }
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;
    int digitSum = hundreds + tens + units;
    int digitProduct = hundreds * tens * units;
    int reversed = units * 100 + tens * 10 + hundreds;
    cout << "Сума: " << digitSum << endl << "Добуток: " << digitProduct << endl << "Реверс: " << reversed << endl;
}