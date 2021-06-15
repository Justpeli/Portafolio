
// Matriz dinamica
#include <iostream>
#include <string>
using namespace std;
void imprimir(int ** matriz, int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (matriz[i][j] < 10)
			{
				cout << "|" << matriz[i][j] << " |";
			}
			else
			{
				cout << "|" << matriz[i][j] << "|";
			}
		}
		cout << (endl);
	}
}
int main()
{
	int filas = 0;
	int columnas = 0;
	int numeros = 0;
	srand(time(NULL));
	cout << "introduzca el numero de filas: \n";
	cin >> filas;
	cout << "Introduzca el numero de columnas: \n";
	cin >> columnas;
	int** matriz = new int * [filas];
	for (int i = 0; i < filas; i++)
	{
		matriz[i] = new int[columnas];
	}
	cout << "Que desea hacer? 1.- Introducir numeros, 2.-Numeros aleatorios\n";
	cin >> numeros;
	switch (numeros)
	{
		case 1: 
			for (int i = 0; i < filas; i++)
			{
				for (int j = 0; j < columnas; j++)
				{
					cout << "introduzca un dato en la posicion [" << i << "] [" << j << "]: ";
					cin >> matriz[i][j];
				}
			}

			break;
		case 2:
			for (int i = 0; i < filas; i++)
			{
				for (int j = 0; j < columnas; j++)
				{
					matriz[i][j] = 0 + rand() % (0 + 100);
				}
			}
			break;
		default:
			cout << "No me rompa el programa compa";
			return 0;
		break;
	} 
	imprimir(matriz,filas,columnas);

	
}