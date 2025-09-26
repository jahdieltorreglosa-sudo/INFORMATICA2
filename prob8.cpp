#include <iostream>
using namespace std;

int main() {
    char texto[100], letras[100], numeros[100];
    cout << "Ingrese una cadena: ";
    cin >> texto;

    int l = 0, n = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= '0' && texto[i] <= '9') {
            numeros[n++] = texto[i];
        } else {
            letras[l++] = texto[i];
        }
    }
    letras[l] = '\0';
    numeros[n] = '\0';

    cout << "Original: " << texto << endl;
    cout << "Texto: " << letras << endl;
    cout << "Numero: " << numeros << endl;
}
