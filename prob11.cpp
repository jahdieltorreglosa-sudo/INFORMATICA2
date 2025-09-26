#include <iostream>
using namespace std;

int main() {
    const int filas = 15; // a..o
    const int cols = 20;
    char sala[15][20];
    // inicializar
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < cols; ++j)
            sala[i][j] = '-';

    while (true) {
        // mostrar
        cout << "   ";
        for (int j = 0; j < cols; ++j) cout << (j+1<10 ? " " : "") << j+1 << " ";
        cout << "\n";
        for (int i = 0; i < filas; ++i) {
            cout << char('a' + i) << "  ";
            for (int j = 0; j < cols; ++j) cout << " " << sala[i][j] << " ";
            cout << "\n";
        }

        string accion;
        cout << "escribe accion (reservar/cancelar/salir): ";
        cin >> accion;
        if (accion == "salir") break;

        char fila;
        int num;
        cout << "escribe fila (a-o) y numero (1-20): ";
        cin >> fila >> num;
        int fi = fila - 'a';
        int cj = num - 1;
        if (fi < 0 || fi >= filas || cj < 0 || cj >= cols) {
            cout << "fila o numero fuera de rango\n";
            continue;
        }
        if (accion == "reservar") {
            if (sala[fi][cj] == '+') cout << "ya esta reservado";
            else { sala[fi][cj] = '+'; cout << "reservado\n"; }
        } else if (accion == "cancelar") {
            if (sala[fi][cj] == '-') cout << "ya esta libre";
            else { sala[fi][cj] = '-'; cout << "cancelado"; }
        } else {
            cout << "accion no dessconocida";
        }
    }
    return 0;
}
