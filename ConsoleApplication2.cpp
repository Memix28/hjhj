#include<iostream>
#include<locale.h>
#include<fstream>
#include<Windows.h>;
#include<string>
#include<ctype.h> 

using namespace std;

using namespace std;
int n = 1;

bool  regresar = false;
struct Lista {
	string NumOrd;
	string NomJuego[20];
	char Clasif[20];
	char Descrip[20];
	char Charact[20];
	char Gen[20];
	float Precio;
	int Orden;
	int ADL;


} Tienda[100];

int k = 0, j = 1, i;

int main()
{
	struct Lista {
		string Codigo;
		string Detalles;
		string ADL;
		string Clasif;
		string Charact;
		string Descrip;
		string Gen;
		float Precio;
		int Orden, NumOrd;

	} Tienda[100];
		Lista
		lista[5];
	int j, Opcion;

	while (true)
	{
		cout << "Menu" << endl << endl;
		cout << "1) Agregar Artiuclo" << endl;
		cout << "2) Modificar Articulo (En Desarrollo)" << endl;
		cout << "3) Eliminar Articulo (En Desarrollo)" << endl;
		cout << "4) Lista de Articulos Vigentes (En Desarrollo)" << endl;
		cout << "5) Salir del Programa" << endl;
		cout << "Que operacion desea realizar: ";
		cin >> Opcion;
		cout << " " << endl << endl;
		system("pause");
		
		switch (Opcion)
		{
		case 1:
			for (int i = 0; i < 3; i++)
			{
				cout << "Numero de orden:  ";
				lista[i].NumOrd = i + 1;
				cout << lista[i].NumOrd ;
				cout << "" << endl;
				cout << "Nombre del videojuego: ";
				cin.ignore();
				getline(cin, lista[i].Detalles);
				cout << "" << endl;
				cout << "Fecha de lanzamiento: "; 
				cin >> lista[i].ADL;
				cout << "" << endl;
				cout << "Clasificacion: ";
				cin.ignore();
				getline(cin, lista[i].Clasif);
				cout << "" << endl;
				cout << "Caracteristicas: ";
				cin.ignore();
				getline(cin, lista[i].Charact);
				cout << "" << endl;
				cout << "Descripcion: ";
				cin.ignore();
				getline(cin, lista[i].Descrip);
				cout << "" << endl;
				cout << "Genero: ";
				cin >> lista[i].Gen;
				cout << "" << endl;
				cout << "Escriba el precio del producto: ";
				cout << " " << endl;
				cin >> lista[i].Precio;
				cout << " " << endl << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

				cout << "Su orden es: " << endl;
				cout << "Codigo del Producto: " << lista[i].NumOrd<< endl;
				cout << "Nombre del videojuego: " << lista[i].Detalles << endl;
				cout << "Fecha de lanzamiento: " << lista[i].ADL << endl;
				cout << "Clasificacion: " << lista[i].Clasif << endl;
				cout << "Descripcion: " << lista[i].Descrip << endl;
				cout << "Genero: " << lista[i].Gen << endl;
				cout << "El precio total con impuesto incluido es de: $" << lista[i].Precio+(lista[i].Precio*0.16) << endl << endl;
				cout << " " << endl;
				system("pause");
				system("cls");

			}
			break;

			for (int i = 0; i < 3; i++) {
				j = j - 1;
			}
			break;

			break;


		case 5:

			for (i = 0; i < k; i++)
			{

				ofstream ordenes("Ordenes.txt", ios::app);
				if (!ordenes)
				{
					cout << "Error opening file" << endl;
				}
				ordenes << endl << "Orden: " << lista[i].Orden << endl << "Codigo: " << lista[i].NumOrd << endl << "Descripcion: " << lista[i].Detalles << endl << "Precio: " << lista[i].Precio << endl << "Talla: " << endl;

			}

			exit(0);

			break;
		default:
			cout << "Opcion no valida, favor de escoger una de las opciones mencionadas." << endl;
			cin.clear();
			cin.ignore();
			cin >> Opcion;
			break;
		}
	}return 0;

}
