// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()

{
    srand(time(NULL));
    int pokemon = 0;
    int rival = 0;
    int Accion_rival = 0;
    int Accion = 0;
    int hp = 100;
    int hp_rival = 100;
    int Comprobacion_valor = 0;
    int Comprobacion_valor2 = 0;

    cout << "Estimado tester por favor respete lo que dice el programa y pruebelo siguiendo las instrucciones, gracias :D \nEste mensaje tambien va para Mau :DD\n";
    system("pause");
    system("cls");

    cout << "Elija un pokemon con los numeros 1, 2, 3 y 4\n1-Charmander (Fuego) 2-Squirtle (Agua) 3-Bulbasaur (Planta) 4-Pikachu (Electrico)\n";
    cin >> pokemon;
    system("cls");
           
    switch (pokemon)
    {
    case 1:

        cout << "Elegiste a Charmander como tu Pokemon para pelear \n";
        cout << "Contra que Pokemon deseas pelear? Elija un pokemon con los numeros 1, 2, 3 y 4\n1-Charmander (Fuego) 2-Squirtle (Agua) 3-Bulbasaur (Planta) 4-Pikachu (Electrico)\n";
        cin >> rival;
        system("cls");
        if (rival == 1)
        {
            cout << "Pelearas contra Charmander\n";
        }
        else if (rival == 2)
        {
            cout << "Pelearas contra Squirtle\n";
        }
        else if (rival == 3)
        {
            cout << "Pelearas contra Bulbasaur\n";
        }
        else if (rival == 4)
        {
            cout << "Pelearas contra Pikachu\n";
        }

        do
        {
            

            if (rival == 1)
            {
                if (hp <= 0)
                {
                    cout << "Tu pokemon murio :(";
                }
                else
                {
                    cout << "Tu vida restante: " << hp << endl;
                }
                if (hp_rival <= 0)
                {
                    cout << "El pokemon enemigo murio :D";
                }
                else
                {
                    cout << "La vida restante del Charmander enemigo: " << hp_rival << endl;
                }
                cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender";
                cin >> Accion;
                Accion_rival = 0 + rand() % (0 + 100);
                system("cls");
                if (Accion == 1 && Accion_rival < 50)
                {
                    cout << "Ambos pokemons atacaron\n";
                    hp = hp - 50;
                    hp_rival = hp_rival - 50;
                    system("pause");
                    system("cls");
                }
                else if (Accion == 1 && Accion_rival > 50)
                {
                    cout << "Atacaste pero tu rival se defendio\n";
                    cout << "Charmander se defendio correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival < 50)
                {
                    cout << "Te defendiste cuando tu rival ataco\n";
                    cout << "Te defendiste correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival > 50)
                {
                    cout << "Ambos pokemons se defendieron\n";
                    cout << "Pelea de Metapods\n";
                    system("pause");
                    system("cls");
                }

            }
            else if (rival == 2)
            {
                if (hp <= 0)
                {
                    cout << "Tu pokemon murio :(";
                }
                else
                {
                    cout << "Tu vida restante: " << hp << endl;
                }
                if (hp_rival <= 0)
                {
                    cout << "El pokemon enemigo murio :D";
                }
                else
                {
                    cout << "La vida restante del Squirtle enemigo: " << hp_rival << endl;
                }
                cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                cin >> Accion;
                Accion_rival = 0 + rand() % (0 + 100);
                system("cls");
                if (Accion == 1 && Accion_rival < 50)
                {
                    cout << "Ambos pokemons atacaron\n";
                    hp = hp - 75;
                    hp_rival = hp_rival - 25;
                    cout << "Tu vida restante: " << hp << endl;
                    cout << "La vida restante de tu rival: " << hp_rival << endl;
                    system("pause");
                    system("cls");
                }

                else if (Accion == 1 && Accion_rival > 50)
                {
                    cout << "Atacaste pero tu rival se defendio\n";
                    cout << "Squirtle se defendio correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival < 50)
                {
                    cout << "Te defendiste cuando tu rival ataco\n";
                    cout << "Te defendiste correctamente\n";

                }
                else if (Accion == 2 && Accion_rival > 50)
                {
                    cout << "Ambos pokemons se defendieron\n";
                    cout << "Pelea de Metapods\n";
                    system("pause");
                    system("cls");
                }

            }

            else if (rival == 3)
            {
                if (hp <= 0)
                {
                    cout << "Tu pokemon murio :(";
                }
                else
                {
                    cout << "Tu vida restante: " << hp << endl;
                }
                if (hp_rival <= 0)
                {
                    cout << "El pokemon enemigo murio :D";
                }
                else
                {
                    cout << "La vida restante del Bulbasaur enemigo: " << hp_rival << endl;
                }
                cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                cin >> Accion;
                Accion_rival = 0 + rand() % (0 + 100);
                system("cls");
                if (Accion == 1 && Accion_rival < 50)
                {
                    cout << "Ambos pokemons atacaron\n";
                    hp = hp - 25;
                    hp_rival = hp_rival - 75;
                    cout << "Tu vida restante: " << hp << endl;
                    cout << "La vida restante de tu rival: " << hp_rival << endl;
                    system("pause");
                    system("cls");
                }
                else if (Accion == 1 && Accion_rival > 50)
                {
                    cout << "Atacaste pero tu rival se defendio\n";
                    cout << "Squirtle se defendio correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival < 50)
                {
                    cout << "Te defendiste cuando tu rival ataco\n";
                    cout << "Te defendiste correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival > 50)
                {
                    cout << "Ambos pokemons se defendieron\n";
                    cout << "Pelea de Metapods\n";
                    system("pause");
                    system("cls");
                }
            }

            else if (rival == 4)
            {
                if (hp <= 0)
                {
                    cout << "Tu pokemon murio :(";
                }
                else
                {
                    cout << "Tu vida restante: " << hp << endl;
                }
                if (hp_rival <= 0)
                {
                    cout << "El pokemon enemigo murio :D";
                }
                else
                {
                    cout << "La vida restante del Pikachu enemigo: " << hp_rival << endl;
                }
                cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                cin >> Accion;
                Accion_rival = 0 + rand() % (0 + 100);
                system("cls");
                if (Accion == 1 && Accion_rival < 50)
                {
                    cout << "Ambos pokemons atacaron\n";
                    hp = hp - 50;
                    hp_rival = hp_rival - 50;
                    cout << "Tu vida restante: " << hp << endl;
                    cout << "La vida restante de tu rival: " << hp_rival << endl;
                    system("pause");
                    system("cls");
                }
                else if (Accion == 1 && Accion_rival > 50)
                {
                    cout << "Atacaste pero tu rival se defendio\n";
                    cout << "Pikachu se defendio correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival < 50)
                {
                    cout << "Te defendiste cuando tu rival ataco\n";
                    cout << "Te defendiste correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival > 50)
                {
                    cout << "Ambos pokemons se defendieron\n";
                    cout << "Pelea de Metapods\n";
                    system("pause");
                    system("cls");
                }
            }




        } while ((hp > 0 && hp_rival > 0));
        if (hp <= 0)
        {
            cout << "Charmander perdio, F\n";
        }
        else if (hp_rival <= 0)
        {
            cout << "Charmander Gano :D\n";
        }
        break;

    case 2:
            cout << "Elegiste a Squirtle como tu Pokemon para pelear \n";
            cout << "Contra que Pokemon deseas pelear?\nElija un pokemon con los numeros 1, 2, 3 y 4\n1-Charmander (Fuego) 2-Squirtle (Agua) 3-Bulbasaur (Planta) 4-Pikachu (Electrico)\n";
            cin >> rival;
            system("cls");

            if (rival == 1)
            {
                cout << "Pelearas contra Charmander\n";
            }
            else if (rival == 2)
            {
                cout << "Pelearas contra Squirtle\n";
            }
            else if (rival == 3)
            {
                cout << "Pelearas contra Bulbasaur\n";
            }
            else if (rival == 4)
            {
                cout << "Pelearas contra Pikachu\n";
            }

            do
            {


                if (rival == 1)
                {
                    if (hp <= 0)
                    {
                        cout << "Tu pokemon murio :(";
                    }
                    else
                    {
                        cout << "Tu vida restante: " << hp << endl;
                    }
                    if (hp_rival <= 0)
                    {
                        cout << "El pokemon enemigo murio :D";
                    }
                    else
                    {
                        cout << "La vida restante del Charmander enemigo: " << hp_rival << endl;
                    }
                    cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender";
                    cin >> Accion;
                    Accion_rival = 0 + rand() % (0 + 100);
                    system("cls");
                    if (Accion == 1 && Accion_rival < 50)
                    {
                        cout << "Ambos pokemons atacaron\n";
                        hp = hp - 25;
                        hp_rival = hp_rival - 75;
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 1 && Accion_rival > 50)
                    {
                        cout << "Atacaste pero tu rival se defendio\n";
                        cout << "Charmander se defendio correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival < 50)
                    {
                        cout << "Te defendiste cuando tu rival ataco\n";
                        cout << "Te defendiste correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival > 50)
                    {
                        cout << "Ambos pokemons se defendieron\n";
                        cout << "Pelea de Metapods\n";
                        system("pause");
                        system("cls");
                    }

                }
                else if (rival == 2)
                {
                    if (hp <= 0)
                    {
                        cout << "Tu pokemon murio :(";
                    }
                    else
                    {
                        cout << "Tu vida restante: " << hp << endl;
                    }
                    if (hp_rival <= 0)
                    {
                        cout << "El pokemon enemigo murio :D";
                    }
                    else
                    {
                        cout << "La vida restante del Squirtle enemigo: " << hp_rival << endl;
                    }
                    cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                    cin >> Accion;
                    Accion_rival = 0 + rand() % (0 + 100);
                    system("cls");
                    if (Accion == 1 && Accion_rival < 50)
                    {
                        cout << "Ambos pokemons atacaron\n";
                        hp = hp - 50;
                        hp_rival = hp_rival - 50;
                        cout << "Tu vida restante: " << hp << endl;
                        cout << "La vida restante de tu rival: " << hp_rival << endl;
                        system("pause");
                        system("cls");
                    }

                    else if (Accion == 1 && Accion_rival > 50)
                    {
                        cout << "Atacaste pero tu rival se defendio\n";
                        cout << "Squirtle se defendio correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival < 50)
                    {
                        cout << "Te defendiste cuando tu rival ataco\n";
                        cout << "Te defendiste correctamente\n";

                    }
                    else if (Accion == 2 && Accion_rival > 50)
                    {
                        cout << "Ambos pokemons se defendieron\n";
                        cout << "Pelea de Metapods\n";
                        system("pause");
                        system("cls");
                    }

                }

                else if (rival == 3)
                {
                    if (hp <= 0)
                    {
                        cout << "Tu pokemon murio :(";
                    }
                    else
                    {
                        cout << "Tu vida restante: " << hp << endl;
                    }
                    if (hp_rival <= 0)
                    {
                        cout << "El pokemon enemigo murio :D";
                    }
                    else
                    {
                        cout << "La vida restante del Bulbasaur enemigo: " << hp_rival << endl;
                    }
                    cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                    cin >> Accion;
                    Accion_rival = 0 + rand() % (0 + 100);
                    system("cls");
                    if (Accion == 1 && Accion_rival < 50)
                    {
                        cout << "Ambos pokemons atacaron\n";
                        hp = hp - 75;
                        hp_rival = hp_rival - 25;
                        cout << "Tu vida restante: " << hp << endl;
                        cout << "La vida restante de tu rival: " << hp_rival << endl;
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 1 && Accion_rival > 50)
                    {
                        cout << "Atacaste pero tu rival se defendio\n";
                        cout << "Squirtle se defendio correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival < 50)
                    {
                        cout << "Te defendiste cuando tu rival ataco\n";
                        cout << "Te defendiste correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival > 50)
                    {
                        cout << "Ambos pokemons se defendieron\n";
                        cout << "Pelea de Metapods\n";
                        system("pause");
                        system("cls");
                    }
                }

            else if (rival == 4)
            {
                if (hp <= 0)
                {
                    cout << "Tu pokemon murio :(";
                }
                else
                {
                    cout << "Tu vida restante: " << hp << endl;
                }
                if (hp_rival <= 0)
                {
                    cout << "El pokemon enemigo murio :D";
                }
                else
                {
                    cout << "La vida restante del Pikachu enemigo: " << hp_rival << endl;
                }
                cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                cin >> Accion;
                Accion_rival = 0 + rand() % (0 + 100);
                system("cls");
                if (Accion == 1 && Accion_rival < 50)
                {
                    cout << "Ambos pokemons atacaron\n";
                    hp = hp - 75;
                    hp_rival = hp_rival - 25;
                    cout << "Tu vida restante: " << hp << endl;
                    cout << "La vida restante de tu rival: " << hp_rival << endl;
                    system("pause");
                    system("cls");
                }
                else if (Accion == 1 && Accion_rival > 50)
                {
                    cout << "Atacaste pero tu rival se defendio\n";
                    cout << "Pikachu se defendio correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival < 50)
                {
                    cout << "Te defendiste cuando tu rival ataco\n";
                    cout << "Te defendiste correctamente\n";
                    system("pause");
                    system("cls");
                }
                else if (Accion == 2 && Accion_rival > 50)
                {
                    cout << "Ambos pokemons se defendieron\n";
                    cout << "Pelea de Metapods\n";
                    system("pause");
                    system("cls");
                }
            }




        } while ((hp > 0 && hp_rival > 0));
        if (hp <= 0)
        {
            cout << "Squirtle perdio, F\n";
        }
        else if (hp_rival <= 0)
        {
            cout << "Squirtle Gano :D\n";
        }
        break;
        case 3:
            cout << "Elegiste a Bulbasaur como tu Pokemon para pelear \n";
            cout << "Contra que Pokemon deseas pelear?\nElija un pokemon con los numeros 1, 2, 3 y 4\n1-Charmander (Fuego) 2-Squirtle (Agua) 3-Bulbasaur (Planta) 4-Pikachu (Electrico)\n";
            cin >> rival;
            system("cls");

            if (rival == 1)
            {
                cout << "Pelearas contra Charmander\n";
            }
            else if (rival == 2)
            {
                cout << "Pelearas contra Squirtle\n";
            }
            else if (rival == 3)
            {
                cout << "Pelearas contra Bulbasaur\n";
            }
            else if (rival == 4)
            {
                cout << "Pelearas contra Pikachu\n";
            }

            do
            {


                if (rival == 1)
                {
                    if (hp <= 0)
                    {
                        cout << "Tu pokemon murio :(";
                    }
                    else
                    {
                        cout << "Tu vida restante: " << hp << endl;
                    }
                    if (hp_rival <= 0)
                    {
                        cout << "El pokemon enemigo murio :D";
                    }
                    else
                    {
                        cout << "La vida restante del Charmander enemigo: " << hp_rival << endl;
                    }
                    cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender";
                    cin >> Accion;
                    Accion_rival = 0 + rand() % (0 + 100);
                    system("cls");
                    if (Accion == 1 && Accion_rival < 50)
                    {
                        cout << "Ambos pokemons atacaron\n";
                        hp = hp - 75;
                        hp_rival = hp_rival - 25;
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 1 && Accion_rival > 50)
                    {
                        cout << "Atacaste pero tu rival se defendio\n";
                        cout << "Charmander se defendio correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival < 50)
                    {
                        cout << "Te defendiste cuando tu rival ataco\n";
                        cout << "Te defendiste correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival > 50)
                    {
                        cout << "Ambos pokemons se defendieron\n";
                        cout << "Pelea de Metapods\n";
                        system("pause");
                        system("cls");
                    }

                }
                else if (rival == 2)
                {
                    if (hp <= 0)
                    {
                        cout << "Tu pokemon murio :(";
                    }
                    else
                    {
                        cout << "Tu vida restante: " << hp << endl;
                    }
                    if (hp_rival <= 0)
                    {
                        cout << "El pokemon enemigo murio :D";
                    }
                    else
                    {
                        cout << "La vida restante del Squirtle enemigo: " << hp_rival << endl;
                    }
                    cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                    cin >> Accion;
                    Accion_rival = 0 + rand() % (0 + 100);
                    system("cls");
                    if (Accion == 1 && Accion_rival < 50)
                    {
                        cout << "Ambos pokemons atacaron\n";
                        hp = hp - 25;
                        hp_rival = hp_rival - 75;
                        cout << "Tu vida restante: " << hp << endl;
                        cout << "La vida restante de tu rival: " << hp_rival << endl;
                        system("pause");
                        system("cls");
                    }

                    else if (Accion == 1 && Accion_rival > 50)
                    {
                        cout << "Atacaste pero tu rival se defendio\n";
                        cout << "Squirtle se defendio correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival < 50)
                    {
                        cout << "Te defendiste cuando tu rival ataco\n";
                        cout << "Te defendiste correctamente\n";

                    }
                    else if (Accion == 2 && Accion_rival > 50)
                    {
                        cout << "Ambos pokemons se defendieron\n";
                        cout << "Pelea de Metapods\n";
                        system("pause");
                        system("cls");
                    }

                }

                else if (rival == 3)
                {
                    if (hp <= 0)
                    {
                        cout << "Tu pokemon murio :(";
                    }
                    else
                    {
                        cout << "Tu vida restante: " << hp << endl;
                    }
                    if (hp_rival <= 0)
                    {
                        cout << "El pokemon enemigo murio :D";
                    }
                    else
                    {
                        cout << "La vida restante del Bulbasaur enemigo: " << hp_rival << endl;
                    }
                    cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                    cin >> Accion;
                    Accion_rival = 0 + rand() % (0 + 100);
                    system("cls");
                    if (Accion == 1 && Accion_rival < 50)
                    {
                        cout << "Ambos pokemons atacaron\n";
                        hp = hp - 50;
                        hp_rival = hp_rival - 50;
                        cout << "Tu vida restante: " << hp << endl;
                        cout << "La vida restante de tu rival: " << hp_rival << endl;
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 1 && Accion_rival > 50)
                    {
                        cout << "Atacaste pero tu rival se defendio\n";
                        cout << "Squirtle se defendio correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival < 50)
                    {
                        cout << "Te defendiste cuando tu rival ataco\n";
                        cout << "Te defendiste correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival > 50)
                    {
                        cout << "Ambos pokemons se defendieron\n";
                        cout << "Pelea de Metapods\n";
                        system("pause");
                        system("cls");
                    }
                }

                else if (rival == 4)
                {
                    if (hp <= 0)
                    {
                        cout << "Tu pokemon murio :(";
                    }
                    else
                    {
                        cout << "Tu vida restante: " << hp << endl;
                    }
                    if (hp_rival <= 0)
                    {
                        cout << "El pokemon enemigo murio :D";
                    }
                    else
                    {
                        cout << "La vida restante del Pikachu enemigo: " << hp_rival << endl;
                    }
                    cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                    cin >> Accion;
                    Accion_rival = 0 + rand() % (0 + 100);
                    system("cls");
                    if (Accion == 1 && Accion_rival < 50)
                    {
                        cout << "Ambos pokemons atacaron\n";
                        hp = hp - 50;
                        hp_rival = hp_rival - 50;
                        cout << "Tu vida restante: " << hp << endl;
                        cout << "La vida restante de tu rival: " << hp_rival << endl;
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 1 && Accion_rival > 50)
                    {
                        cout << "Atacaste pero tu rival se defendio\n";
                        cout << "Pikachu se defendio correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival < 50)
                    {
                        cout << "Te defendiste cuando tu rival ataco\n";
                        cout << "Te defendiste correctamente\n";
                        system("pause");
                        system("cls");
                    }
                    else if (Accion == 2 && Accion_rival > 50)
                    {
                        cout << "Ambos pokemons se defendieron\n";
                        cout << "Pelea de Metapods\n";
                        system("pause");
                        system("cls");
                    }
                }




            } while ((hp > 0 && hp_rival > 0));
            if (hp <= 0)
            {
                cout << "Bulbasaur perdio, F\n";
            }
            else if (hp_rival <= 0)
            {
                cout << "Bulbasaur Gano :D\n";
            }
            break;
            case 4:
                cout << "Elegiste a Pikachu como tu Pokemon para pelear \n";
                cout << "Contra que Pokemon deseas pelear?\nElija un pokemon con los numeros 1, 2, 3 y 4\n1-Charmander (Fuego) 2-Squirtle (Agua) 3-Bulbasaur (Planta) 4-Pikachu (Electrico)\n";
                cin >> rival;
                system("cls");

                if (rival == 1)
                {
                    cout << "Pelearas contra Charmander\n";
                }
                else if (rival == 2)
                {
                    cout << "Pelearas contra Squirtle\n";
                }
                else if (rival == 3)
                {
                    cout << "Pelearas contra Bulbasaur\n";
                }
                else if (rival == 4)
                {
                    cout << "Pelearas contra Pikachu\n";
                }

                do
                {


                    if (rival == 1)
                    {
                        if (hp <= 0)
                        {
                            cout << "Tu pokemon murio :(";
                        }
                        else
                        {
                            cout << "Tu vida restante: " << hp << endl;
                        }
                        if (hp_rival <= 0)
                        {
                            cout << "El pokemon enemigo murio :D";
                        }
                        else
                        {
                            cout << "La vida restante del Charmander enemigo: " << hp_rival << endl;
                        }
                        cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender";
                        cin >> Accion;
                        Accion_rival = 0 + rand() % (0 + 100);
                        system("cls");
                        if (Accion == 1 && Accion_rival < 50)
                        {
                            cout << "Ambos pokemons atacaron\n";
                            hp = hp - 50;
                            hp_rival = hp_rival - 50;
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 1 && Accion_rival > 50)
                        {
                            cout << "Atacaste pero tu rival se defendio\n";
                            cout << "Charmander se defendio correctamente\n";
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 2 && Accion_rival < 50)
                        {
                            cout << "Te defendiste cuando tu rival ataco\n";
                            cout << "Te defendiste correctamente\n";
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 2 && Accion_rival > 50)
                        {
                            cout << "Ambos pokemons se defendieron\n";
                            cout << "Pelea de Metapods\n";
                            system("pause");
                            system("cls");
                        }

                    }
                    else if (rival == 2)
                    {
                        if (hp <= 0)
                        {
                            cout << "Tu pokemon murio :(";
                        }
                        else
                        {
                            cout << "Tu vida restante: " << hp << endl;
                        }
                        if (hp_rival <= 0)
                        {
                            cout << "El pokemon enemigo murio :D";
                        }
                        else
                        {
                            cout << "La vida restante del Squirtle enemigo: " << hp_rival << endl;
                        }
                        cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                        cin >> Accion;
                        Accion_rival = 0 + rand() % (0 + 100);
                        system("cls");
                        if (Accion == 1 && Accion_rival < 50)
                        {
                            cout << "Ambos pokemons atacaron\n";
                            hp = hp - 25;
                            hp_rival = hp_rival - 75;
                            cout << "Tu vida restante: " << hp << endl;
                            cout << "La vida restante de tu rival: " << hp_rival << endl;
                            system("pause");
                            system("cls");
                        }

                        else if (Accion == 1 && Accion_rival > 50)
                        {
                            cout << "Atacaste pero tu rival se defendio\n";
                            cout << "Squirtle se defendio correctamente\n";
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 2 && Accion_rival < 50)
                        {
                            cout << "Te defendiste cuando tu rival ataco\n";
                            cout << "Te defendiste correctamente\n";

                        }
                        else if (Accion == 2 && Accion_rival > 50)
                        {
                            cout << "Ambos pokemons se defendieron\n";
                            cout << "Pelea de Metapods\n";
                            system("pause");
                            system("cls");
                        }

                    }

                    else if (rival == 3)
                    {
                        if (hp <= 0)
                        {
                            cout << "Tu pokemon murio :(";
                        }
                        else
                        {
                            cout << "Tu vida restante: " << hp << endl;
                        }
                        if (hp_rival <= 0)
                        {
                            cout << "El pokemon enemigo murio :D";
                        }
                        else
                        {
                            cout << "La vida restante del Bulbasaur enemigo: " << hp_rival << endl;
                        }
                        cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                        cin >> Accion;
                        Accion_rival = 0 + rand() % (0 + 100);
                        system("cls");
                        if (Accion == 1 && Accion_rival < 50)
                        {
                            cout << "Ambos pokemons atacaron\n";
                            hp = hp - 50;
                            hp_rival = hp_rival - 50;
                            cout << "Tu vida restante: " << hp << endl;
                            cout << "La vida restante de tu rival: " << hp_rival << endl;
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 1 && Accion_rival > 50)
                        {
                            cout << "Atacaste pero tu rival se defendio\n";
                            cout << "Squirtle se defendio correctamente\n";
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 2 && Accion_rival < 50)
                        {
                            cout << "Te defendiste cuando tu rival ataco\n";
                            cout << "Te defendiste correctamente\n";
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 2 && Accion_rival > 50)
                        {
                            cout << "Ambos pokemons se defendieron\n";
                            cout << "Pelea de Metapods\n";
                            system("pause");
                            system("cls");
                        }
                    }

                    else if (rival == 4)
                    {
                        if (hp <= 0)
                        {
                            cout << "Tu pokemon murio :(";
                        }
                        else
                        {
                            cout << "Tu vida restante: " << hp << endl;
                        }
                        if (hp_rival <= 0)
                        {
                            cout << "El pokemon enemigo murio :D";
                        }
                        else
                        {
                            cout << "La vida restante del Pikachu enemigo: " << hp_rival << endl;
                        }
                        cout << "Selecciona que accion deseas realizar con los numeros 1 y 2\n1-Atacar  2-Defender\n";
                        cin >> Accion;
                        Accion_rival = 0 + rand() % (0 + 100);
                        system("cls");
                        if (Accion == 1 && Accion_rival < 50)
                        {
                            cout << "Ambos pokemons atacaron\n";
                            hp = hp - 50;
                            hp_rival = hp_rival - 50;
                            cout << "Tu vida restante: " << hp << endl;
                            cout << "La vida restante de tu rival: " << hp_rival << endl;
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 1 && Accion_rival > 50)
                        {
                            cout << "Atacaste pero tu rival se defendio\n";
                            cout << "Pikachu se defendio correctamente\n";
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 2 && Accion_rival < 50)
                        {
                            cout << "Te defendiste cuando tu rival ataco\n";
                            cout << "Te defendiste correctamente\n";
                            system("pause");
                            system("cls");
                        }
                        else if (Accion == 2 && Accion_rival > 50)
                        {
                            cout << "Ambos pokemons se defendieron\n";
                            cout << "Pelea de Metapods\n";
                            system("pause");
                            system("cls");
                        }
                    }




                } while ((hp > 0 && hp_rival > 0));
                if (hp <= 0)
                {
                    cout << "Pikachu perdio, F\n";
                }
                else if (hp_rival <= 0)
                {
                    cout << "Pikachu Gano :D\n";
                }
                break;
                default: 
                    cout << "No me quiera romper el programa compa :(\n";
                    system("pause");
                    system("cls");
                    return main();
                break;
    }

            
         
    
}