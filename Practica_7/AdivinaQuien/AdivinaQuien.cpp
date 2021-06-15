// Adivina quien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;
int main()
{
	string Comprobacion = "no";
	string repetir = "no";

	system("cls");
	cout << "Buenos dias, Adivinare que pokemon inicial de Kanto estas pensando\n";
	cout << "Responda con si o no minusculas\n";
	cout << "Tu pokemon tiene una cola de fuego?\n";
	cin >> Comprobacion;
	if (Comprobacion == "si")
	{
		system("cls");
		cout << "Tu pokemon es Charmander\n";
		cout << "Quieres Volver a jugar?\n";
		cout << "Responda con si o no minusculas\n";
		cin >> repetir;
		if (repetir == "si")
		{
			return main();
			system("cls");
		}
		else
		{
			return 0;
		}
		
	}
	cout << "Tu pokemon lanza agua?\n";
	cin >> Comprobacion;
	if (Comprobacion == "si")
	{
		system("cls");
		cout << "Tu pokemon es Squirtle\n";
		cout << "Quieres Volver a jugar?\n";
		cout << "Responda con si o no minusculas\n";
		cin >> repetir;
		if (repetir == "si")
		{
			return main();
			system("cls");
		}
		else
		{
			return 0;
		}
	}
	cout << "tu pokemon tiene una planta gigante en su espalda y nadie lo quiere?\n";
	cin >> Comprobacion;
	if (Comprobacion == "si")
	{
		system("cls");
		cout << "Tu pokemon es Bulbasaur\n";
		cout << "Quieres Volver a jugar?\n";
		cout << "Responda con si o no minusculas\n";
		cin >> repetir;
		if (repetir == "si")
		{
			return main();
			system("cls");
		}
		else
		{
			return 0;
		}
	}
	cout << "Tu pokemon es la cara de la franquicia?\n";
	cin >> Comprobacion;
	if (Comprobacion == "si")
	{
		system("cls");
		cout << "Tu pokemon es Pikachu\n";
		cout << "Quieres Volver a jugar?\n";
		cout << "Responda con si o no minusculas\n";
		cin >> repetir;
		if (repetir == "si")
		{
			return main();
			system("cls");
		}
		else
		{
			return 0;
		}
	}
	if (Comprobacion == "no")

	{
		system("cls");
		cout << "Estas jugando conmigo o que >:C\n";
		cout << "Quieres Volver a jugar?\n";
		cout << "Responda con si o no minusculas\n";
		cin >> repetir;
		if (repetir == "si")
		{
			return main();
			system("cls");
		}
		else
		{
			return 0;
		}
	}
}