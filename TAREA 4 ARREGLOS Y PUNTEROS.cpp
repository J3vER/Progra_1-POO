#include <iostream>
using namespace std;

int main() { // Corrección: Tipo de retorno de main debe ser 'int'

	// arreglos bidimensionales, matriz, tabla
	int fil = 0, col; // Corrección: Se agregó el punto y coma para separar las declaraciones de variables

	cout << "Ingrese filas:";
	cin >> fil;
	cout << "Ingrese columnas:";
	cin >> col;
	int matriz[fil][col];
	cout << "-------------ingresar-------------" << endl;
	for (int i = 0; i < fil; i++) {
		for (int ii = 0; ii < col; ii++) {
			cout << i << "," << ii << ": ";
			cin >> matriz[i][ii];
		}
	}

	cout << "-------------mostrar-------------" << endl;
	for (int i = 0; i < fil; i++) {
		for (int ii = 0; ii < col; ii++) {
			cout << i << "," << ii << ": " << matriz[i][ii] << endl;
		}
	}

	system("pause");
	return 0; 
}
