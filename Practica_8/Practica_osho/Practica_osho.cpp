

#include <iostream>
#include <string>

using namespace std;

int main()
{

    string Titulo[5];
    int Anio[5];
    string Autor[5];
    int bandera = 0;
   
        cout << "Bienvenido a la biblioteca ";
        for (int flag = 1; flag<6;flag++)
        {
            cout << "por favor agrega el nombre del libro " << flag<<endl;
            getline(cin, Titulo[flag - 1]);

        }
        for (int flag = 1; flag <6; flag++)
        {
            cout << "por favor agrega el año de publicacion del libro " << flag << endl;
            cin >> Anio[flag - 1];
        }
        for (int flag = 1; flag < 6; flag++)
        {
            cout << "por favor agrega el autor del libro " << flag << endl;
            getline(cin, Autor[flag - 1]);
        }

        for (int flag = 1; flag < 6; flag++)
        {
            cout << "Libro  " << flag << endl;
            cout << Titulo[flag-1]<<endl;
            cout << "Anio  " << flag << endl;
            cout << Anio[flag-1]<<endl;
            cout << "Autor  " << flag << endl;
            cout << Autor[flag-1]<<endl;
        }


}

