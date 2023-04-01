#include <windows.h>
#include <conio.h>
#include <string>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define gopri(a,b,c) gotoxy(a,b); printf(c);
#define ASCENDENTE 1
#define DESCENDENTE 0
#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
#define _ACTOR_

using namespace std;

void gotoxy(int x, int y)
{
	COORD 
	coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct nodo {
	
	int Dpi;
  string nombre;
 string sexo;
  string dirección;
 string Tipo_alergia;
 string fechanacimiento;
 string estadocivil;
 int ttelefonofijo;
 int ttelefonomovil;
 string  correoelectronico;
 string brigrada;
 string fechainiciobrigada;
 nodo* sgt;
 


};
void agrega(nodo** cab, nodo** no , nodo** sex,  nodo** dir, nodo** tipal, nodo** fena, nodo** esciv, nodo** telf, nodo** telmov, nodo** cor, nodo** brig, nodo** fechinbri, nodo** fin);

void muestra(nodo* cab, nodo *no, nodo* sex, nodo* dir, nodo* tipal, nodo* fena, nodo* esciv, nodo* telf, nodo* telmov, nodo* cor, nodo* brig, nodo* fechinbri) {
	int i; i = 5;
	system("cls");
	gotoxy(10, 18); cout << "elementos en la lista" << endl; nodo* temp; temp = cab; nodo* tno; tno = no; while (tno !=NULL) {
		gotoxy(12, i);	cout << temp << "    DPI--->", temp->Dpi;
		gotoxy(14, i);	cout << tno << "    Nombre--->", tno->nombre;

		i++;
		tno = tno->sgt;
	}
	system("pause");
}

int main()
{
	nodo* c = NULL, * d = NULL, * e = NULL, * g = NULL, * h = NULL, * i = NULL, * j = NULL, * k = NULL, * l = NULL, * m = NULL, * n = NULL, * o = NULL, *f = NULL;  //puntero de cabecera, y puntero de fin de lista
	int opcion;
	opcion = 1; do {
		system("cls");
		gopri(10, 10, " 1. Registrarse en la base de datos");
		gopri(10, 12, " 2. Control de las inscripciónes a los diferentes comandos y brigadas de la fuerza naval");
		gopri(10, 14, " (0) para finalizar");
		gopri(10, 15, "Ingresa la opcion");
		cin >> opcion;
		switch (opcion) {
		case 0: exit(0); break;
		case 1: agrega(&c, &d, &e, &g, &h, &i, &j, &k, &l, &m, &n, &o, &f); break;
		case 2: muestra(c, d, e, g, h, i, j, k, l, m, n, o); break;

		}
	} while (opcion != 0);
	system("PAUSE");
	return 0;
}

void agrega(nodo** cab, nodo** no, nodo** sex, nodo** dir, nodo** tipal, nodo** fena, nodo** esciv, nodo** telf, nodo** telmov, nodo** cor, nodo** brig, nodo** fechinbri, nodo** fin) {
	int Dp,telefonofijo, telefonomovil;
	string nom,sexoo,domicilio, tipoalergia,fechnacimineto, eestadocivil, correo, brigadaper, fechainbrigada;

	cout << "ingrese su numero de DPI: ", cin >> Dp;
	cout << "Numero de telefono fijo: ", cin >> telefonofijo;
	cout << "Numero de telefono movil: ", cin >> telefonomovil;
	cout << "ingrese su nombre completo: ", getline(cin, nom);
	cin.get();
	cout << "ingrese su sexo: ", getline(cin, sexoo);
	cin.get();
	cout << "DirecciOn de domicilio: ", getline(cin, domicilio);
	cin.get();
	cout << "Tipo de alergias: ", getline(cin, tipoalergia);
	cin.get();
	cout << "Fecha de nacimiento: ", getline(cin, fechnacimineto);
	cin.get();
	cout << "Estado civil: ", getline(cin, eestadocivil);
	cin.get();
	cout << "Correo electronico: ", getline(cin, correo);
	cin.get();
	cout << "Nombre de la brigada a la que pertenece: ", getline(cin,brigadaper);
	cin.get();
	cout << "Fecha que inicio en la brigada: ", getline(cin, fechainbrigada);
	cin.get();


		*cab = new nodo;
		*no = new nodo;
		*sex = new nodo;
		*dir = new nodo;
		*tipal = new nodo;
		*fena = new nodo;
		*esciv = new nodo;
		*telf = new nodo;
		*telmov= new nodo;
		*cor = new nodo;
		*brig= new nodo;
		*fechinbri= new nodo;
		*fin = new nodo;
		(*cab)->Dpi = Dp;

		(*no)->nombre = nom;
		(*sex)->sexo = sexoo;
		(*dir)->dirección = domicilio;
		(*tipal)->Tipo_alergia = tipoalergia;
		(*fena)->fechanacimiento = fechnacimineto;
		(*esciv)->estadocivil = eestadocivil;
		(*telf)->ttelefonofijo = telefonofijo;
		(*telmov)->ttelefonomovil = telefonomovil;
		(*cor)->correoelectronico = correo;
		(*brig)->brigrada = brigadaper;
		(*fechinbri)->fechainiciobrigada = fechainbrigada;
		(*fechinbri)->sgt = NULL;
		(*fin) = (*fechinbri);
	

	
}

