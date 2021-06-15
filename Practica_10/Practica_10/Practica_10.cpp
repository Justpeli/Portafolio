// Practica_10.cpp : Battle royal
//

#include <iostream>
#include <stdlib.h>
#include <locale>

using namespace std;

struct Peleadores{
    string na;
    int st;
    int sp;
    int ag;
    int in;
} alumnos[13];

int main()
{
    srand(time(NULL));
    string alumno[13] = { "Cebreros","David","Didier","Diego C.","Diego A.","Eva","Felipe","Gerson","Jesus","Juvencio","Luis","Mayra","Miguel", };
    int mst = 0, msp = 0, mag = 0, min = 0;
    string wst, wsp, wag, win;
    
    Peleadores alumnos[13];
    for (int i = 0; i < 13; i++)
    {
        alumnos[i].na = alumno[i];
        alumnos[i].st = 0 + rand() % (0 + 100);
        alumnos[i].sp = 0 + rand() % (0 + 100);
        alumnos[i].ag = 0 + rand() % (0 + 100);
        alumnos[i].in = 0 + rand() % (0 + 100);
    }
    for (int i = 0; i < 13; i++)
    {
        cout << "Peleador: " << i+1 << " " <<alumnos[i].na << endl;
        cout << "Fuerza: "  << alumnos[i].st << endl; 
        cout << "Velocidad: " << alumnos[i].sp<< endl; 
        cout << "Agilidad: " << alumnos[i].ag << endl; 
        cout << "Intelecto: " << alumnos[i].in << endl;
        cout << "------------------------------------------" <<endl;
    }
    for (int i = 0; i < 13; i++)
    {
        if (alumnos[i].st > mst)
        {
            mst = alumnos[i].st;
            wst = alumnos[i].na;
        }
    }
    cout << "Mas Fuerte: " << wst << " con " << mst << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < 13; i++)
    {
        if (alumnos[i].sp > msp)
        {
            msp = alumnos[i].sp;
            wsp = alumnos[i].na;
        }
    }
    cout << "Mas Rapido: " << wsp << " con " << msp << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < 13; i++)
    {
        if (alumnos[i].ag > mag)
        {
            mag = alumnos[i].ag;
            wag = alumnos[i].na;
        }
    }
    cout << "Mas Agil: " << wag << " con " << mag << endl;
    cout << "------------------------------------------" << endl;

    for (int i = 0; i < 13; i++)
    {
        if (alumnos[i].in > min)
        {
            min = alumnos[i].in;
            win = alumnos[i].na;
        }
    }
    cout << "Mas Inteligente: " << win <<" con "<< min << endl;
    cout << "------------------------------------------" << endl;



}

