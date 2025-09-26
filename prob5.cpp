#include <iostream>
using namespace std;

void convertir(int numero, char cadena[]) {
    int i = 0, j, digitos[20];
    if (numero == 0) {
        cadena[0] = '0';
        cadena[1] = '\0';
        return;
    }
    while (numero > 0) {
        digitos[i++] = numero % 10;
        numero /= 10;
    }
    for (j = 0; j < i; j++) {
        cadena[j] = char('0' + digitos[i - j - 1]);
    }
    cadena[j] = '\0';
}

int main() {
    int n;
    char texto[20];
    cout << "Ingrese un numero entero: ";
    cin >> n;
    convertir(n, texto);
    cout << "En cadena: " << texto << endl;
}
