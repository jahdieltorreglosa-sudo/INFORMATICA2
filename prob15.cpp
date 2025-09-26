#include <iostream>
using namespace std;

void interseccion(int A[4], int B[4], int C[4]) {
    int x1 = max(A[0], B[0]);
    int y1 = max(A[1], B[1]);
    int x2 = min(A[0]+A[2], B[0]+B[2]);
    int y2 = min(A[1]+A[3], B[1]+B[3]);

    if (x1 < x2 && y1 < y2) {
        C[0]=x1; C[1]=y1; C[2]=x2-x1; C[3]=y2-y1;
    } else {
        C[0]=C[1]=C[2]=C[3]=0;
    }
}

int main() {
    int A[4]={0,0,8,4}, B[4]={5,2,6,7}, C[4];
    interseccion(A,B,C);
    cout<<"Rectangulo C: {"<<C[0]<<","<<C[1]<<","<<C[2]<<","<<C[3]<<"}"<<endl;
}
