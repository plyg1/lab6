#include <iostream>
#include <Windows.h>

using namespace std;

// Ôóíêö³ÿ äëÿ âèêîíàííÿ Array12.
void task1() {

    // ââåäåííÿ ðîçì³ðó ìàñèâó
    int N;
    cout << "Ââåä³òü ðîçì³ð ìàñèâó: ";
    cin >> N;

    // îãîëîøåííÿ ìàñèâó
    int arr[100];

    // çàïîâíåííÿ ìàñèâó çíà÷åííÿìè 
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    // âèâåäåííÿ âñüîãî ìàñèâó
    cout << "Ïîâíèé ìàñèâ:" << endl;
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    // âèâåäåííÿ åëåìåíò³â ç ïàðíèìè ³íäåêñàìè
    cout << "\nÅëåìåíòè ç ïàðíèìè ³íäåêñàìè:" << endl;
    for (int i = 1; i < N; i += 2) {
        cout << arr[i] << " ";
    }

}

// Ôóíêö³ÿ äëÿ âèêîíàííÿ Array106.
void task2() {

    int N;
    cout << "Ââåä³òü ðîçì³ð ìàñèâó: ";
    cin >> N;

    int arr[100];
    for (int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    cout << "Ïî÷àòêîâèé ìàñèâ: ";
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

    cout << "\nÍîâèé ìàñèâ: ";
    for (int i = 0; i < 2 * N; i++) {
        cout << newArr[i] << " ";
    }


}

// Ôóíêö³ÿ ìåíþ
void menu() {

    int task; // çì³ííà äëÿ âèáîðó çàâäàííÿ
    do {

            // Âèâåäåííÿ äîñòóïíèõ çàâäàíü
            cout << "Âèáåð³òü çàâäàííÿ (0 - âèõ³ä):" << endl;
        cout << "1 - Çàâäàííÿ 1" << endl;
        cout << "2 - Çàâäàííÿ 2" << endl;

        // Ââåäåííÿ íîìåðà îáðàíîãî çàâäàííÿ
        cin >> task;

        // Âèêîíàííÿ â³äïîâ³äíîãî çàâäàííÿ
        switch (task) {

        case 1:
            // Âèêëèê ôóíêö³¿ äëÿ çàâäàííÿ 1
            task1();
            break;

        case 2:
            // Âèêëèê ôóíêö³¿ äëÿ çàâäàííÿ 2   
            task2();
            break;

        case 0:
            cout << "Âèõ³ä ç ïðîãðàìè" << endl;
            break;

        default:
            cout << "Ïîìèëêà! Âèáåð³òü 1, 2 àáî 0" << endl;
        }

    } while (task != 0); // Ïîâòîðþºìî, ïîêè íå áóäå îáðàíî 0

}

// Ãîëîâíà ôóíêö³ÿ
int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    menu(); // Âèêëèê ôóíêö³¿ ìåíþ

    return 0;

}
