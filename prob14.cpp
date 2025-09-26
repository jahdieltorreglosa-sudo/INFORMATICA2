#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int m[5][5];
    int v = 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            m[i][j] = v++;

    cout << "original:\n";
    for (int i=0;i<n;i++){ for (int j=0;j<n;j++) cout << m[i][j] << "\t"; cout << "\n"; }

    // rotada 90
    cout << "rotada 90:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) cout << m[n-1-j][i] << "\t";
        cout << "\n";
    }

    // rotada 180
    cout << "rotada 180:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) cout << m[n-1-i][n-1-j] << "\t";
        cout << "\n";
    }

    // rotada 270
    cout << "rotada 270:\n";
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++) cout << m[j][n-1-i] << "\t";
        cout << "\n";
    }

    return 0;
}
