#include <iostream>
#include <Windows.h>

using namespace std;

// ������� ��� ��������� Array12.
void task1() {

    // �������� ������ ������
    int N;
    cout << "������ ����� ������: ";
    cin >> N;

    // ���������� ������
    int arr[100];

    // ���������� ������ ���������� 
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    // ��������� ������ ������
    cout << "������ �����:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    // ��������� �������� � ������� ���������
    cout << "\n�������� � ������� ���������:" << endl;
    for (int i = 1; i < N; i += 2) {
        cout << arr[i] << " ";
    }

}

// ������� ��� ��������� Array106.
void task2() {

    int N;
    cout << "������ ����� ������: ";
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    cout << "���������� �����: ";
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

    cout << "\n����� �����: ";
    for (int i = 0; i < 2 * N; i++) {
        cout << newArr[i] << " ";
    }


}

// ������� ����
void menu() {

    int task; // ����� ��� ������ ��������
    do {

            // ��������� ��������� �������
            cout << "������� �������� (0 - �����):" << endl;
        cout << "1 - �������� 1" << endl;
        cout << "2 - �������� 2" << endl;

        // �������� ������ �������� ��������
        cin >> task;

        // ��������� ���������� ��������
        switch (task) {

        case 1:
            // ������ ������� ��� �������� 1
            task1();
            break;

        case 2:
            // ������ ������� ��� �������� 2   
            task2();
            break;

        case 0:
            cout << "����� � ��������" << endl;
            break;

        default:
            cout << "�������! ������� 1, 2 ��� 0" << endl;
        }

    } while (task != 0); // ����������, ���� �� ���� ������ 0

}

// ������� �������
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    menu(); // ������ ������� ����

    return 0;

}