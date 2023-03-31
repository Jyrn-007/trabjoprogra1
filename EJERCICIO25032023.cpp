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
	char a[100];
  char *nombre=a;;
 char *sexo=a;
 char *dirección=a;
 char *Tipo_alergia=a;
 char *fechanacimiento=a;
  char *estadocivil=a;
 int ttelefonofijo;
 int ttelefonomovil;
 char *correoelectronico = a;
 char *brigrada = a;
 char *fechainiciobrigada = a;
 nodo* sgt;


};
void agrega(nodo** cab, nodo** no , nodo** sex,  nodo** dir, nodo** tipal, nodo** fena, nodo** esciv, nodo** telf, nodo** telmov, nodo** cor, nodo** brig, nodo** fechinbri, nodo** fin);


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
	

		}
	} while (opcion != 0);
	system("PAUSE");
	return 0;
}

void agrega(nodo** cab, nodo** no, nodo** sex, nodo** dir, nodo** tipal, nodo** fena, nodo** esciv, nodo** telf, nodo** telmov, nodo** cor, nodo** brig, nodo** fechinbri, nodo** fin) {

	char a[100];
	int Dp; cout << "ingrese su numero de DPI" << endl;  cin >> Dp;
	char *nom=a; cout << "ingrese su nombre completo" << endl;  cin >> nom;
     char *sexoo=a; cout << "ingrese su sexo" << endl; cin >> sexoo;

	char *domicilio=a; cout << "4.DirecciOn de domicilio" << endl; cin >> domicilio;
	char* tipoalergia = a; cout << "Tipo de alergias" << endl; cin >> tipoalergia;
	 char* fechnacimineto = a; cout << "Fecha de nacimiento" << endl; cin >> fechnacimineto;
	 char* eestadocivil = a; cout << "Estado civil" << endl; cin >> eestadocivil;
	int telefonofijo; cout << "Teléfono fijo," << endl; cin >> telefonofijo;
	int telefonomovil; cout << "Teléfono móvil" << endl; cin >> telefonomovil;
	char* correo = a; cout << "Correo electrónico," << endl; cin >> correo;
	char* brigadaper = a; cout << "Brigada a la que pertenece," << endl; cin >> brigadaper;
	char* fechainbrigada = a; cout << "Fecha de inicio en la brigada." << endl; cin >> fechainbrigada;


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
		(*cab)->sgt =NULL;

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

