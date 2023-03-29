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
char nom[40];
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
struct nodo {
	int Dpi;
	nodo* sig;

 string nombre;


};
void agrega(nodo**cab,nodo**no ,nodo** fin);
//void muestra(nodo* cab);
void muestra(nodo* cab, nodo* no) {
	int i; i = 5;
	
	system("cls");
	gotoxy(10, 18); cout << "elementos en la lista" << endl; nodo* temp; temp = cab; nodo* tno; tno = no; while (temp != NULL) {
		gotoxy(1, i);	cout << temp << "    Numero de DPI--->" << temp->Dpi;
		gotoxy(1, i);	cout << tno << "    Numero completo-->" << tno->nombre;
		i++;
		temp = temp->sig;
	
	
	
	}
	system("pause");
}

int main()
{
	nodo* c = NULL, *b=NULL ,* f = NULL;  //puntero de cabecera, y puntero de fin de lista
	int opcion;
	opcion = 1; do {
		system("cls");
		gopri(10, 10, " 1. Ingresa un dato numerico entero");
		gopri(10, 12, " 2. Muestra los datos ingresados");
		gopri(10, 14, " (0) para finalizar");
		gopri(10, 15, "Ingresa la opcion");
		cin >> opcion;
		switch (opcion) {
		case 0: exit(0); break;
		case 1: agrega(&c,&b,&f); break;
		case 2: muestra(c,b); break;
		}
	} while (opcion != 0);
	system("PAUSE");
	return 0;
}

void agrega(nodo** cab,nodo**no ,nodo** fin) {
	
	int Dp; cout << "ingrese su numero de DPI" << endl; cin >> Dp;
	string nom; cout << "ingrese su nombre completo" << endl; cin >> nom;

	if ( (*cab) == NULL) {
		*cab = new nodo;
		*no = new nodo;
		(*cab)->Dpi = Dp;
		(*no)->nombre = nom;
		(*fin) = (*cab);
	}
	else {
		(*fin)->sig = new nodo;
		(*fin)->sig->Dpi = Dp;
		(*fin) = (*fin)->sig;
		(*fin)->sig= NULL;
	}



}

