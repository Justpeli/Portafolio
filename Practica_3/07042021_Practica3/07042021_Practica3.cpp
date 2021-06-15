// 07042021_Practica3.cpp Una calculadora que detecta el caracter de cada operacion.

#include <iostream>
using namespace std;

int main()
{
    string a;
    int    b = 0;
    double x = 0;
    double y = 0;
    double z = 0;

        cout << "Bienvenido a la calculadora \nQue operacion deseas realizar? \n+.-Suma \n-.-Resta \n*.-Multiplicacion \n/.-Division\n";
        cin >> a;
    
    if (a == "+")
    {
        b = 1;
    }
    else if (a == "-")
    {
        b = 2;
    }
    else if (a == "*")
    {
        b = 3;
    }
    else if (a == "/")
    {
        b = 4;
    }
    else
    {
        cout << "Operacion invalida :)\n";
    }

    switch (b)
    {
    case 1: cout << "Usted eligio Suma, Elija el primer NUMERO que desee sumar: ";
            cin >> x;
            cout << "Elija el segundo NUMERO que desee sumar: ";
            cin >> y;
            z= x + y;
            cout << "El resultado de la suma es: " << z<< endl;
            break;
    
    case 2: cout << "Usted eligio resta, Elija el primer NUMERO que desee restar: ";
            cin >> x;
            cout << "Elija el segundo NUMERO que desee restar: ";
            cin >> y;
            z = x - y;
            cout << "El resultado de la resta es: " << z << endl;
            break;
   
    case 3: cout << "Usted eligio multiplicacion, Elija el primer NUMERO que desee multiplicar: ";
            cin >> x;
            cout << "Elija el segundo NUMERO que desee multuplicar: ";
            cin >> y;
            z = x * y;
            cout << "El resultado de la multiplicacion es: " << z << endl;
            break;
    
    case 4: cout << "Usted eligio division, Elija el primer NUMERO que desee dividir: ";
            cin >> x;
            cout << "Elija el segundo NUMERO que desee dividir: ";
            cin >> y;
            if (y==0)
            {
                cout << "NO SE PUEDE DIVIDIR ENTRE 0 :)\n";
            }
            else
            {
                z = x / y;
                cout << "El resultado de la division es: " << z << endl;
            }
            break;
    default: return main();
    }
    
}
