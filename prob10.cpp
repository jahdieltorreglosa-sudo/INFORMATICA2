#include <iostream>
using namespace std;


int valor(char c) {
    if (c == 'M') return 1000;
    if (c == 'D') return 500;
    if (c == 'C') return 100;
    if (c == 'L') return 50;
    if (c == 'X') return 10;
    if (c == 'V') return 5;
    if (c == 'I') return 1;
    return 0;
}

int deromanoantero(char *r) {
    int total = 0;
    for (int i = 0; r[i] != '\0'; i++) {
        int v1 = valor(r[i]);
        int v2 = valor(r[i+1]);
        if (v2 > v1) {
            total -= v1;  // resta
        } else {
            total += v1;  //  suma
        }
    }
    return total;
}

int main() {
    char romano[50];
    cout << "escriba numero romano: ";
    cin >> romano;

    int numero = deromanoaentero(romano);

    cout << "el numero ingresado fue: " << romano << endl;
    cout << "quee corresponde a: " << numero << endl;

    return 0;
}
