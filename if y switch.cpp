#include <iostream>
using namespace std;
main (){

	 int codigo=0;
	 cout<<"Ingrese codigo de area: ";
	 cin>>codigo;
	 switch(codigo){
	 	 case 501 :cout<<"Belice"<<endl;
	 	 	break;
	 	 case 502 :cout<<"Guatemala"<<endl;
	 	 	break;
	 	 case 503 :cout<<"El Salvador"<<endl;
	 	 	break;	
	 	 case 504 :cout<<"Honduras"<<endl;
	 	 	break;
	 	 case 505 :cout<<"Nicaragua"<<endl;
	 	 	break;
	 	 case 506 :cout<<"Costa Rica"<<endl;
	 	 	break;
	 	 case 507:cout<<"Panama"<<endl;
	 	 	break;
	 	 	
	 	default : cout<<"Este codigo no es de centroamerica"<<endl;
	 }
	 
	system("pause");
}
