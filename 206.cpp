#include <iostream>
#include <Windows.h>

using namespace std;

// Функція для виконання Array12.
void task1() {

    // введення розміру масиву
    int N;
    cout << "Введіть розмір масиву: ";
    cin >> N;

    // оголошення масиву
    int arr[100];

    // заповнення масиву значеннями 
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    // виведення всього масиву
    cout << "Повний масив:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    // виведення елементів з парними індексами
    cout << "\nЕлементи з парними індексами:" << endl;
    for (int i = 1; i < N; i += 2) {
        cout << arr[i] << " ";
    }

}

// Функція для виконання Array106.
void task2() {

    int N;
    cout << "Введіть розмір масиву: ";
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    cout << "Початковий масив: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    int* newArr = new int[2 * N];
    int j = 0;

    for (int i = 0; i < N; i++) {
        newArr[j] = arr[i];
        j++;
        if (i % 2 != 0) {
            newArr[j] = arr[i];
            j++;
        }
    }

    cout << "\nНовий масив: ";
    for (int i = 0; i < 2 * N; i++) {
        cout << newArr[i] << " ";
    }


}

// Функція меню
void menu() {

    int task; // змінна для вибору завдання
    do {

            // Виведення доступних завдань
            cout << "Виберіть завдання (0 - вихід):" << endl;
        cout << "1 - Завдання 1" << endl;
        cout << "2 - Завдання 2" << endl;

        // Введення номера обраного завдання
        cin >> task;

        // Виконання відповідного завдання
        switch (task) {

        case 1:
            // Виклик функції для завдання 1
            task1();
            break;

        case 2:
            // Виклик функції для завдання 2   
            task2();
            break;

        case 0:
            cout << "Вихід з програми" << endl;
            break;

        default:
            cout << "Помилка! Виберіть 1, 2 або 0" << endl;
        }

    } while (task != 0); // Повторюємо, поки не буде обрано 0

}

// Головна функція
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    menu(); // Виклик функції меню

    return 0;

}