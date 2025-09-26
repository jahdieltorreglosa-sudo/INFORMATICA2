#include <iostream>
using namespace std;

// calcula combinatorio C(n,k) paso a paso
long long comb(int n, int k) {
    if (k > n) return 0;
    if (k > n - k) k = n - k;
    long long res = 1;
    for (int i = 1; i <= k; ++i) {
        res = res * (n - k + i) / i;
    }
    return res;
}

int main() {
    int n;
    cout << "escribe n (malla n x n): ";
    cin >> n;
    long long caminos = comb(2*n, n);
    cout << "para una malla de " << n << "x" << n << " hay " << caminos << " caminos.\n";
    return 0;
}
