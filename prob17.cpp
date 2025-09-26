#include <iostream>
using namespace std;

int sumaDivisores(int n){
    int s=1;
    for(int i=2;i<=n/2;i++)
        if(n%i==0) s+=i;
    return s;
}

int main() {
    int limite;
    cout<<"escriba limite: ";
    cin>>limite;
    int suma=0;
    for(int a=2;a<limite;a++){
        int b=sumaDivisores(a);
        if(b!=a && b<limite && sumaDivisores(b)==a){
            suma+=a;
        }
    }
    cout<<"la suma es: "<<suma<<endl;
}
