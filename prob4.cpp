#include <iostream>
using namespace std;

int convertir(char num[]) {
    int resultado = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        resultado = resultado * 10 + (num[i] - '0');
    }
    return resultado;
}

int main() {
    char cadena[20];
    cout << "Ingrese un numero en texto: ";
    cin >> cadena;
    int valor = convertir(cadena);
    cout << "Convertido a entero: " << valor << endl;
}
