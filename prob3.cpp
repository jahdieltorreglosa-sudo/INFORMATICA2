#include <iostream>
#include <cstring>
using namespace std;

bool sonIguales(char cad1[], char cad2[]) {
    if (strlen(cad1) != strlen(cad2)) return false;
    for (int i = 0; cad1[i] != '\0'; i++) {
        if (cad1[i] != cad2[i]) return false;
    }
    return true;
}

int main() {
    char a[50], b[50];
    cout << "escriba la primera cadena: ";
    cin >> a;
    cout << "escriba la segunda cadena: ";
    cin >> b;

    if (sonIguales(a, b))
        cout << "son iguales";
    else
        cout << "no son iguales";
}
