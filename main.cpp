#include <iostream>
#include <windows.h>

using namespace std;

// Изменено void на int
int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(0, "");

    int a = 3;
    int b = 5;

    // Логика обмена значениями
    int temp = a;
    a = b;
    b = temp;

    cout << "Новое значение a = " << a << endl;
    cout << "Новое значение b = " << b << endl;

    system("pause");

    // Обязательный возврат для int main
    return 0;
}
