#include <iostream>
using namespace std;
void ordenar(int n[10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(n[j]>n[j+1]){
                int temp=n[j+1];
                n[j+1]=n[j];
                n[j]=temp;
            }
        }
    }
}
int main(){
    int lista[10]{};
    for(int i=0;i<10;i=i+1){
        cout<<"Ingrese un numero"<<endl;
        cin>>lista[i];
    }
    ordenar(lista);
    for(int i=0;i<10;i++){
        cout<<lista[i];
        cout<<" ";
    }
    return 0;
}
