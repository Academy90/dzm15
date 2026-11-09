/* 
1.double result = 9 / 2;  ->  result == 4.0
Обидва операнди цілі, тому виконується цілочисельне ділення
Виправлення: double result = 9.0 / 2;

2. if (x = 0) -- це ПРИСВОЄННЯ, а не порівняння, тому змінній x записується 0
(старе значення 15 втрачається), а значення виразу дорівнює 0, тобто
"хибність". Тому гілка if НЕ виконається, а x надалі буде 0.
Правильно: if (x == 0) -- x не змінюється, умова для x = 15 хибна.

3. Виправлений код:
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть два цілих числа: ";
    cin >> a >> b;
    int sum = a + b;
    cout << "Сума дорівнює: " << sum << endl;
    return 0;
}*/
#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "1" << endl;
    long long totalSeconds;
    cout << "Введіть кількість секунд (додатне ціле): ";
    cin >> totalSeconds;

    long long hours = totalSeconds / 3600;
    long long minutes = (totalSeconds % 3600) / 60;
    long long seconds = totalSeconds % 60;

    cout << hours << " год. " << minutes << " хв. " << seconds << " сек." << endl;
}