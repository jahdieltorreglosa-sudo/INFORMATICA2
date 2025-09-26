#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    char letras[200];
    int conteo[26] = {0};
    srand(time(0));

    // llenar con letras aleatorias
    for (int i = 0; i < 200; i++) {
        letras[i] = 'A' + rand() % 26;
        cout << letras[i];
        conteo[letras[i] - 'A']++;
    }

    cout << "\n\nFrecuencia:\n";
    for (int i = 0; i < 26; i++) {
        if (conteo[i] > 0) {
            cout << char('A' + i) << ": " << conteo[i] << endl;
        }
    }
}

