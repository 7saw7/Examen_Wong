#include<iostream>
using namespace std;

int main(){
    int n, sumatoria;
	cout<<"Ingrese un numero: "; cin>>n;
    
    sumatoria= (((n)*(n+1))/2);
    
    cout<<"La suma de los "<<n<<" primeros numeros es: "<<endl;
    cout<<sumatoria;
    
    
    return 0;
}
