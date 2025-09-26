#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    char texto[100];
    cout << "escriba n: ";
    cin >> n;
    cout << "escriba cadena numerica: ";
    cin >> texto;

    int len = strlen(texto);
    int faltan = n - (len % n);
    if (faltan != n) { // completar con ceros
        for (int i = len; i >= 0; i--) {
            texto[i+faltan] = texto[i];
        }
        for (int j = 0; j < faltan; j++) texto[j] = '0';
    }

    int suma = 0;
    for (int i = 0; texto[i] != '\0'; i += n) {
        int valor = 0;
        for (int j = 0; j < n; j++) {
            valor = valor*10 + (texto[i+j]-'0');
        }
        suma += valor;
    }

    cout << "original: " << texto << endl;
    cout << "suma: " << suma << endl;
}
