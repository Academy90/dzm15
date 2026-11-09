#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "2" << endl;
    double unitPrice;
    int quantity;
    cout << "Введіть ціну одиниці товару (грн): ";
    cin >> unitPrice;
    cout << "Введіть кількість одиниць: ";
    cin >> quantity;
    double total = unitPrice * quantity;
    double discount = 0.0;
    if (total >= 1000) {
        discount = total * 0.10;
    }
    double finalSum = total - discount;
    cout << "Сума: " << total << endl << "Знижка: " << discount << endl << "До сплати: " << finalSum << endl;
}