#include <iostream>
using namespace std;

int RootCount(double A, double B, double C) {
    if (A == 0) return -1; // Помилка: A не може бути 0
    double D = B * B - 4 * A * C;
    return (D > 0) ? 2 : (D == 0) ? 1 : 0;
}

int main() {
    for (int i = 1; i <= 3; i++) {
        double A, B, C;
        cout << "Введіть коефіцієнти для рівняння " << i << " (A, B, C): ";
        cin >> A >> B >> C;
        int roots = RootCount(A, B, C);
        if (roots == -1) 
            cout << "Помилка: A не може бути 0" << endl;
        else 
            cout << "Кількість коренів: " << roots << endl;
    }
    return 0;
}
