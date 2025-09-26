#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "escribe filas y columnas: ";
    cin >> r >> c;
    if (r < 3 || c < 3) { cout << "matriz demasiado pequeña"; return 0; }

    int a[100][100]; // tamaño max simple
    cout << "escribe la matriz (fila por fila):\n";
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            cin >> a[i][j];

    int cont = 0;
    for (int i = 1; i < r-1; ++i) {
        for (int j = 1; j < c-1; ++j) {
            int suma = a[i][j] + a[i][j-1] + a[i][j+1] + a[i-1][j] + a[i+1][j];
            double prom = suma / 5.0;
            if (prom > 6.0) cont++;
        }
    }
    cout << "estrellas encontradas: " << cont << "\n";
    return 0;
}
