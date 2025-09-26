#include <iostream>
using namespace std;

int main() {
    char texto[100];
    cout << "Ingrese texto: ";
    cin.getline(texto, 100);

    cout << "Original: " << texto << endl;
    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] >= 'a' && texto[i] <= 'z')
            texto[i] = texto[i] - 32;
    }
    cout << "En mayuscula: " << texto << endl;
}
