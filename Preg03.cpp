#include <iostream>
using namespace std;
int main(){
	int h, p;
	cout<<"Ingrese el numero de horas (valor entero)"<<endl;
	cin>>h;
	if(h<=4){
		p=6;
	}
	if(h>4){
		p=(h-4)*2+6;
	}
	cout<<"Importe a pagar "<<p<<endl;
	return 0;
}


