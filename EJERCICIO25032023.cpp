#include <windows.h>
#include <conio.h>
#include <string>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#define gopri(a,b,c) gotoxy(a,b); printf(c);
#define ASCENDENTE 12
#define DESCENDENTE 0
#include <stdlib.h> 
#include <stdio.h> 
#include <iostream> 
using namespace std;

void gotoxy(int x, int y)
{
	COORD coord;
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
 string correoelectronico;
 string brigrada;
 string fechainiciobrigada;
 nodo* sgt;


};
void agrega(nodo** cab, nodo** no , nodo** sex,  nodo** dir, nodo** tipal, nodo** fena, nodo** esciv, nodo** telf, nodo** telmov, nodo** cor, nodo** brig, nodo** fechinbri, nodo** fin);


int main()
{
	nodo* c = NULL, * d = NULL, * e = NULL, * f = NULL, * g= NULL, * h = NULL, * i = NULL, * j = NULL, * k = NULL, * l = NULL, * m = NULL, * n = NULL, * o = NULL;  //puntero de cabecera, y puntero de fin de lista
	int opcion;
	opcion = 1; do {
		system("cls");
		gopri(10, 10, " 1. Ingresa un dato numerico entero");
		gopri(10, 14, " (0) para finalizar");
		gopri(10, 15, "Ingresa la opcion");
		cin >> opcion;
		switch (opcion) {
		case 0: exit(0); break;
		case 1: agrega(&c, &d, &e, &f, &g, &h, &i, &j, &k, &l, &m, &n, &o); break;
		}
	} while (opcion != 0);
	system("PAUSE");
	return 0;
}

void agrega(nodo** cab, nodo** no, nodo** sex, nodo** dir, nodo** tipal, nodo** fena, nodo** esciv, nodo** telf, nodo** telmov, nodo** cor, nodo** brig, nodo** fechinbri, nodo** fin) {
	
	int Dp; cout << "ingrese su numero de DPI" << endl;  cin >> Dp;
	string nom; cout << "ingrese su nombre completo" << endl;  cin >> nom;
	string sexoo; cout << "ingrese su sexo" << endl;  cin >> sexoo;
	string domicilio; cout << "ingrese su nombre completo" << endl; cin >> domicilio;
	string tipoalergia; cout << "ingrese su nombre completo" << endl; cin >> tipoalergia;
	string fechnacimineto; cout << "ingrese su nombre completo" << endl; cin >> fechnacimineto;
	string eestadocivil; cout << "ingrese su nombre completo" << endl; cin >> eestadocivil;
	int telefonofijo; cout << "ingrese su nombre completo" << endl; cin >> telefonofijo;
	int telefonomovil; cout << "ingrese su nombre completo" << endl; cin >> telefonomovil;
	string correo; cout << "ingrese su nombre completo" << endl; cin >> correo;
	string brigadaper; cout << "ingrese su nombre completo" << endl; cin >> brigadaper;
	string fechainbrigada; cout << "ingrese su nombre completo" << endl; cin >> fechainbrigada;

	if ( ((*cab), (* no), (* sex), (* dir), (* tipal), ( * fena), (* esciv), (* telf), (* telmov),  (* cor), (* brig), (* fechinbri)) == NULL) {
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

	else {
		(*fin)->sgt = new nodo;
		(*fin) = (*fin)->sgt;
		(*fin)->sgt = NULL;
	}

}

