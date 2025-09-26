#include <iostream>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}

int main(){
    int n;
    cout<<"Ingrese N: ";
    cin>>n;
    int nums[10];
    for(int i=0;i<10;i++) nums[i]=i;

    n--; // índice desde 0
    cout<<"Permutacion: ";
    for(int k=10;k>0;k--){
        int f = fact(k-1);
        int pos = n/f;
        cout<<nums[pos];
        for(int j=pos;j<k-1;j++) nums[j]=nums[j+1];
        n=n%f;
    }
    cout<<endl;
}
