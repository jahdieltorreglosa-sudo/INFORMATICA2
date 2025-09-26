#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "escribe n (tamano, max 10): ";
    cin >> n;
    if (n <= 0 || n > 10) { cout << "n no valido"; return 0; }

    int m[10][10];
    cout << "escribe los " << n*n << " numeros (fila por fila):\n";
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> m[i][j];

    int suma = 0;
    for (int j = 0; j < n; ++j) suma += m[0][j];

    // filas
    for (int i = 1; i < n; ++i) {
        int s = 0;
        for (int j = 0; j < n; ++j) s += m[i][j];
        if (s != suma) { cout << "no es cuadrado magico\n"; return 0; }
    }
    // columnas
    for (int j = 0; j < n; ++j) {
        int s = 0;
        for (int i = 0; i < n; ++i) s += m[i][j];
        if (s != suma) { cout << "no es cuadrado magico"; return 0; }
    }
    // diagonales
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; ++i) { d1 += m[i][i]; d2 += m[i][n-1-i]; }
    if (d1 != suma || d2 != suma) { cout << "no es cuadrado magico"; return 0; }

    cout << "es cuadrado magico";
    return 0;
}
