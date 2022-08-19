// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cstdlib>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int cont;
	int corr;
	int deci;
	int inc;
	string j[20];
	int men;
	string nom;
	float porc;
	int r;
	int res;
	int resp;
	int resp1;
	int resp10;
	int resp11;
	int resp12;
	int resp13;
	int resp14;
	int resp15;
	int resp16;
	int resp17;
	int resp18;
	int resp19;
	int resp2;
	int resp20;
	int resp21;
	int resp22;
	int resp23;
	int resp24;
	int resp25;
	int resp3;
	int resp4;
	int resp5;
	int resp6;
	int resp7;
	int resp8;
	int resp9;
	int t;
	int v;
	int x;
	v = 0;
	t = 1;
	while (t==1) {
		cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
		cout << "*************Juego de preguntas*************" << endl;
		cout << "" << endl;
		cout << "1. Nueva partida" << endl;
		cout << "2. Mejores Jugadores" << endl;
		cout << "3. Salir" << endl;
		cin >> men;
		if ((men==1)) {
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			r = 1;
			while (r==1) {
				corr = 0;
				inc = 0;
				cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
				cout << "---Primera Pregunta---" << endl;
				resp = (rand()%5)+1;
				if ((resp==1)) {
					cout << "Una persona que realiza soldaduras es un ..." << endl;
					cout << "1. Soldador" << endl;
					cout << "2. Soleado" << endl;
					cout << "3. Soldado" << endl;
					cout << "4. Sorteado" << endl;
					cin >> res;
					if ((res==1)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==2)) {
					cout << "Cuantas m tiene la frase Mi mamá me mima" << endl;
					cout << "1. Cinco" << endl;
					cout << "2. Diez" << endl;
					cout << "3. Cuatro" << endl;
					cout << "4. Seis" << endl;
					cin >> res;
					if ((res==4)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==3)) {
					cout << "Cantar entre dientes y sin pronunciar palabras es:?" << endl;
					cout << "1. Tararear" << endl;
					cout << "2. Tiritar" << endl;
					cout << "3. Torear" << endl;
					cout << "4. Trotar" << endl;
					cin >> res;
					if ((res==1)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==4)) {
					cout << "¿En que país nació Gabriel García Márquez?:" << endl;
					cout << "1.Venezuela" << endl;
					cout << "2. Colombia" << endl;
					cout << "3. México" << endl;
					cout << "4. Chile" << endl;
					cin >> res;
					if ((res==2)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==5)) {
					cout << "¿Qué país goleo a Brasil 1-7 en el mundial pasado?" << endl;
					cout << "1. Colombia" << endl;
					cout << "2. Argentina" << endl;
					cout << "3. Alemania" << endl;
					cout << "4. Holanda" << endl;
					cin >> res;
					if ((res==3)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				cout << "Presiona ENTER para continuar" << endl;
				cin >> cont;
				cout << "" << endl;
				cout << "---Segunda Pregunta---" << endl;
				resp = (rand()%5)+1;
				if ((resp==1)) {
					cout << "¿Con que palabra se expresa correctamente que alguien ocupo el lugar 11 en un concurso?" << endl;
					cout << "1. Undécimo" << endl;
					cout << "2. Primerdecimo" << endl;
					cout << "3. Undecimo" << endl;
					cout << "4. Undésimo" << endl;
					cin >> res;
					if ((res==1)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==2)) {
					cout << "La siguiente frase ¿En qué idioma está escrito?: buon pomeriggio " << endl;
					cout << "1. Frances" << endl;
					cout << "2. Portugues" << endl;
					cout << "3. Italiano" << endl;
					cout << "4. Albanés" << endl;
					cin >> res;
					if ((res==3)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==3)) {
					cout << "El kilometro es una medida de:" << endl;
					cout << "1. Presión" << endl;
					cout << "2. Longitud" << endl;
					cout << "3. Peso" << endl;
					cout << "4. Temperatura" << endl;
					cin >> res;
					if ((res==2)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==4)) {
					cout << "¿Cuál de las ciudades no se encuentra en Colombia?" << endl;
					cout << "1. Cali" << endl;
					cout << "2. Soledad" << endl;
					cout << "3. Leticia" << endl;
					cout << "4. Córdoba" << endl;
					cin >> res;
					if ((res==4)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==5)) {
					cout << "La palabra PROGRAMA es" << endl;
					cout << "1. Esdrujula" << endl;
					cout << "2. Grave" << endl;
					cout << "3. Aguda" << endl;
					cout << "4. Sobreesdrujula" << endl;
					cin >> res;
					if ((res==2)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				cout << "Presiona ENTER para continuar" << endl;
				cin >> cont;
				cout << "" << endl;
				cout << "---Tercera Pregunta---" << endl;
				resp = (rand()%5)+1;
				if ((resp==1)) {
					cout << "¿En qué billete sale Policarpa Salavarrieta?" << endl;
					cout << "1. En el de $ 10.000" << endl;
					cout << "2. En el de $2.000" << endl;
					cout << "3. En el de 20.000" << endl;
					cout << "4. En ninguno de los anteriores" << endl;
					cin >> res;
					if ((res==1)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==2)) {
					cout << "El hueso fémur se encuentra en:" << endl;
					cout << "1. Los brazos" << endl;
					cout << "2. La cabeza" << endl;
					cout << "3. El abdomen" << endl;
					cout << "4. Las piernas" << endl;
					cin >> res;
					if ((res==4)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==3)) {
					cout << "¿Cuál de los siguientes no es un lenguaje de programación?" << endl;
					cout << "1. Phiton" << endl;
					cout << "2. C++" << endl;
					cout << "3. Java" << endl;
					cout << "4. Ubuntu" << endl;
					cin >> res;
					if ((res==4)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==4)) {
					cout << "¿Cuánto es 2+8*10-12/1(-24+26)?" << endl;
					cout << "1. 396" << endl;
					cout << "2. 76" << endl;
					cout << "3. 35" << endl;
					cout << "4. Ninguna de las anteriores" << endl;
					cin >> res;
					if ((res==3)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==5)) {
					cout << "¿Cuál de los siguientes no es un continente?" << endl;
					cout << "1. Australia" << endl;
					cout << "2. Antártida" << endl;
					cout << "3. Oceanía" << endl;
					cout << "4. Europa" << endl;
					cin >> res;
					if ((res==1)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				cout << "Presiona ENTER para continuar" << endl;
				cin >> cont;
				cout << "" << endl;
				cout << "---Cuarta Pregunta---" << endl;
				resp = (rand()%5)+1;
				if ((resp==1)) {
					cout << "No es un país de Asia:" << endl;
					cout << "1. Grecia" << endl;
					cout << "2. China" << endl;
					cout << "3. Mongolia" << endl;
					cout << "4. Laos" << endl;
					cin >> res;
					if ((res==1)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==2)) {
					cout << "La frecuencia se mide en:" << endl;
					cout << "1. Amperios" << endl;
					cout << "2. Hercios" << endl;
					cout << "3. Voltios" << endl;
					cout << "4. Watts" << endl;
					cin >> res;
					if ((res==2)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==3)) {
					cout << "¿Cuál de los siguientes dispositivos de la computadora es de salida?" << endl;
					cout << "1. El teclado" << endl;
					cout << "2. La impresora" << endl;
					cout << "3. El mouse" << endl;
					cout << "4. El micrófono" << endl;
					cin >> res;
					if ((res==2)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==4)) {
					cout << "La depuración de un algoritmo sirve para:" << endl;
					cout << "1. Diseñar y estructurar un algoritmo" << endl;
					cout << "2. Facilitar la elaboración de un algoritmo" << endl;
					cout << "3. La codificación de un algoritmo" << endl;
					cout << "4. Probar el funcionamiento de un algoritmo" << endl;
					cin >> res;
					if ((res==4)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==5)) {
					cout << "Los algoritmos pueden ser: " << endl;
					cout << "1. Cuantitativos o calificativos" << endl;
					cout << "2. Cuantitativos o cualitativos" << endl;
					cout << "3. Buenos o malos" << endl;
					cout << "4. Calificativos  o cualitativos" << endl;
					cin >> res;
					if ((res==2)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				cout << "Presiona ENTER para continuar" << endl;
				cin >> cont;
				cout << "" << endl;
				cout << "---Quinta Pregunta---" << endl;
				resp = (rand()%5)+1;
				if ((resp==1)) {
					cout << "Top-down, significa" << endl;
					cout << "1. Caida" << endl;
					cout << "2. De abajo hacia arriba" << endl;
					cout << "3. De arriba hacia abajo" << endl;
					cout << "4. Subir" << endl;
					cin >> res;
					if ((res==3)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==2)) {
					cout << "Concretamente la tiroides es:" << endl;
					cout << "1. Un hueso" << endl;
					cout << "2. Un musculo " << endl;
					cout << "3. Una Glándula" << endl;
					cout << "4. Un órgano" << endl;
					cin >> res;
					if ((res==3)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==3)) {
					cout << "¿Como firmaba Pablo Ruiz Picasso sus pinturas?" << endl;
					cout << "1. Pablo Picasso" << endl;
					cout << "2. P. Picasso" << endl;
					cout << "3. Pablo Ruiz Picasso" << endl;
					cout << "4. Picasso" << endl;
					cin >> res;
					if ((res==4)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==4)) {
					cout << "¿La fórmula del agua es:?" << endl;
					cout << "1. H2L" << endl;
					cout << "2. 2HO" << endl;
					cout << "3. 2OH" << endl;
					cout << "4. H2O" << endl;
					cin >> res;
					if ((res==4)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				if ((resp==5)) {
					cout << "La queratina es una proteína la cual podemos encontrar en:" << endl;
					cout << "1. El cabello" << endl;
					cout << "2. Los músculos" << endl;
					cout << "3. Los huesos" << endl;
					cout << "4. La sangre" << endl;
					cin >> res;
					if ((res==1)) {
						corr = corr+1;
						cout << "Tu respuesta es correcta" << endl;
					} else {
						inc = inc+1;
						cout << "Tu respuesta es incorrecta" << endl;
					}
				}
				cout << " Presiona ENTER para conocer tus resultados finales" << endl;
				cin >> cont;
				porc = (corr/5)*100;
				cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
				cout << "********** Resultados **********" << endl;
				cout << "" << endl;
				cout << "Respuestas correctas: " << corr << endl;
				cout << "Respuestas incorrectas: " << inc << endl;
				cout << "Respondiste correctamente el " << porc << "% de las preguntas" << endl;
				if ((porc==100)) {
					cout << "Tu resultado es Insuperable" << endl;
					cout << "" << endl;
					cout << "***Digita tu nombre***" << endl;
					cin >> nom;
					j[v-1] = nom;
					v = v+1;
					cout << "** " << nom << " Se te ha registrado en los mejores jugadores**" << endl;
				}
				if ((porc>=80) && (porc<100)) {
					cout << "Tu resultado es Bueno" << endl;
				}
				if ((porc>=60) && (porc<80)) {
					cout << "Tu resultado es Aceptable" << endl;
				}
				if ((porc>=40) && (porc<60)) {
					cout << "Tu resultado es Malo" << endl;
				}
				if ((porc>=20) && (porc<40)) {
					cout << "Tu resultado es Pésimo" << endl;
				}
				if ((porc>=0) && (porc<20)) {
					cout << "Superaste el record de la persona más idiota del mundo" << endl;
				}
				cout << "--------------------------------------------------------" << endl;
				cout << "" << endl;
				cout << "Si deseas jugar otra vez digita 0 de lo contario digite otro numero" << endl;
				cin >> deci;
				if ((deci==0)) {
					r = 1;
				} else {
					r = 2;
				}
				cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			}
		}
		if (men==2) {
			cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
			cout << "********************************" << endl;
			cout << "       Mejores jugadores" << endl;
			cout << "********************************" << endl;
			x = 0;
			while (v>x) {
				cout << j[x-1] << endl;
				x = x+1;
			}
			cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
		}
		if (men==3) {
			t = 2;
		}
	}
	cout << "*******************************************" << endl;
	cout << "   Gracias por jugar JUEGO DE PREGUNTAS" << endl;
	cout << "       Creado por Richard Santana" << endl;
	cout << "*******************************************" << endl;
	cout << "           Presione para salir" << endl;
	return 0;
}

