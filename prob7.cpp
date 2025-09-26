#include <iostream>
using namespace std;

int main() {
    char texto[100], resultado[100];
    cout << "Ingrese una palabra: ";
    cin >> texto;

    int k = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        bool repetido = false;
        for (int j = 0; j < k; j++) {
            if (texto[i] == resultado[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            resultado[k] = texto[i];
            k++;
        }
    }
    resultado[k] = '\0';

    cout << "Original: " << texto << endl;
    cout << "Sin repetidos: " << resultado << endl;
}
