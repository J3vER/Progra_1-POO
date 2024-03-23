#include <iostream>
using namespace std;
// punteros con asignación de memoria dinamica;
// new = reservar un espacio en memoria
// delete [] = liberar la memoria

main(){
	int fil = 0, col=0,**pm_notas;
	cout<<"Ingrese la cantidad Estudiantes:";
	cin>>fil;
	cout<<"Ingrese la cantidad Notas por estudiante:";
	cin>>col;
	
	pm_notas  = new int *[fil];
	for(int i=0; i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++){
		cout<<"_____Estudiante_____"<<i<<endl;
		for (int ii=0;ii<col;ii++){
			cout<<"Nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
		cout<<"_____________"<<endl;
	}
	cout<<"------ Mostrar Notas ------"<<endl;
	for (int i=0;i<fil;i++){
		
		for (int ii=0;ii<col;ii++){
			cout<<*(*(pm_notas+i)+ii)<<endl;
		}
		cout<<"_________________________"<<endl;
	}
	for(int i=0;i<fil;i++){
		delete []pm_notas[i];
	}
	delete [] pm_notas;
	
	system("pause");
}
