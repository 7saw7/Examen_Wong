#include <iostream>
using namespace std;
int main(){
	double g, d;
	cout<<"Ingrese la ganancia: ";
	cin>>g;
	if(g>=0&&g<=1000){
		d=g*5/100;
	}
	if(g>1000&&g<=1500){
		d=g*7/100;
	}
	if(g>1500&&g<=2000){
		d=g*8/100;
	}
	if(g>2000&&g<=5000){
		d=g*10/100;
	}
	if(g>5000){
		d=g*15/100;
	}
	cout<<"Importe a donar: "<<d<<endl;
	return 0;
}

