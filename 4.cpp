#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "4" << endl;
    double a, b, c;
    cout << "Введіть довжину сторони a: ";
    cin >> a;
    cout << "Введіть довжину сторони b: ";
    cin >> b;
    cout << "Введіть довжину сторони c: ";
    cin >> c;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Помилка: сторони мають бути додатними" << endl;
        return 0;
    }
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Трикутник рівносторонній" << endl;
        }
        else if (a == b || a == c || b == c) {
            cout << "Трикутник рівнобедрений" << endl;
        }
        else {
            cout << "Трикутник різносторонній" << endl;
        }
    }
    else {
        cout << "Такого трикутника не існує" << endl;
    }
}