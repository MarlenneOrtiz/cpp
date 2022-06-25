#include <iostream>
#include<stdlib.h>

using namespace std;



int Modulus(int iN, int iMod) {

	int iQ = (iN/iMod);

	return iN - (iQ*iMod);

}



char GetChar(int iGenerator, char cBase, int iRange) {

	return (cBase + Modulus(iGenerator, iRange));

}



int main() {

	string constrasena;

	

	cout << "Eres un agente? ingresa tu contraseña: ";

	cin >> constrasena;

	

	if (constrasena == "smith") {

		system("COLOR 02");



		char caRow[80];

		int j = 7;

		int k = 2;

		int l = 5;

		int m = 1;



		while (true) {

			int i = 0;

			

			

			while (i < 80) {

				if (caRow[i] != ' ') {

					caRow[i] = GetChar(j + i*i, 33, 30);

				}

				std::cout << caRow[i];

				++i;

			}

			j = (j + 31);

			k = (k + 17);

			l = (l + 47);

			m = (m + 67);

			caRow[Modulus(j, 80)] = '-';

			caRow[Modulus(k, 80)] = ' ';

			caRow[Modulus(l, 80)] = '-';

			caRow[Modulus(m, 80)] = ' ';

			

			

			i = 0;

			while (i < 300000) {

				GetChar(1, 1, 1);

				 ++i;

			}

		}		

	} 

	

		if (constrasena == "Neo" || constrasena == "neo") {

		system("COLOR C");



		char caRow[80];

		int j = 7;

		int k = 2;

		int l = 5;

		int m = 1;

		int iterador = 1;



		while (true) {

			int i = 0;

			

		

			while (i < 80) {

				if (caRow[i] != ' ') {

					caRow[i] = GetChar(j + i*i, 33, 30);

				}

				std::cout << caRow[i];

				++i;

			}

			j = (j + 31);

			k = (k + 17);

			l = (l + 47);

			m = (m + 67);

			caRow[Modulus(j, 80)] = '-';

			caRow[Modulus(k, 80)] = ' ';

			caRow[Modulus(l, 80)] = '-';

			caRow[Modulus(m, 80)] = ' ';

			

			

			i = 0;

			while (i < 300000) {

				GetChar(1, 1, 1);

				 ++i;

			

			}

			iterador = iterador + 1;

			

			if (iterador == 10){

				cout << endl;

				cout << endl;

				cout << " *** EL SISTEMA FALLO *** " << endl;

				cout << endl;

				system("PAUSE");

				return 0;

			}

			}			



		}		
else {
	
        cout << endl;
		cout << "ACCESO A LA MATRIX DENEGADO";

	}
    return 0;

}

// Realizado por: Marlenne Alexa Ortiz 
