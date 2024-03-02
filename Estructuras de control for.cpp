#include <iostream>
using namespace std;
main(){
	
	int inicio = 0, fin = 0, res = 0;
	
	cout<<"Ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"Ingrese tabla final: ";
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
	cout<<"tabla del "<<rango<<endl;
		for (int i=1;i<=10;i++){
		res = rango * i;
		cout<<rango<<" x " << i <<" = "<<res<<endl;
		}
		
	


	}
	
	
	system("pause");
}
