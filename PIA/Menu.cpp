#include <iostream>
#include <Windows.h>

//#include "Programador_1.h"
#include "Programador_2.h"
#include "Programador_3.h"

using namespace std;
int main()
{
    int menu = 0;
    do
    {
        system("cls");

        cout << "\t========== PIA ==========\n\n";
        cout << "Matem�ticas para los Videojuegos ii\n";
        cout << "1.- Operaciones de matrices\n";
        cout << "2.- Matrices compuestas\n";
        cout << "3.- Generar nuevas coordenadas por cuaterniones\n";
        cout << "4.- Salir\n\n";
        cin >> menu;

        switch (menu)
        {
            case 1:
            {
                int Submenu_1;
                do {
                    cout << " Que operacion con matrices desea realizar? \n 1) Suma\n2) Resta\n3) Multiplicacion\n4) Obtener la perspectiva\n" << endl;
                    cin >> Submenu_1;
                } while (Submenu_1 < 1 || Submenu_1 > 4);

                /*          
                switch (Submenu_1)
                {
                case 1: Suma();
                    break;
                case 2: Resta();
                    break;
                case 3: Multiplicacion();
                    break;
                default:
                    break;
                }*/
            }
            break;
            case 2:
            { // Matriz compuesta de un gr�fico seg�n angulos
                system("cls");
                int Submenu_2;
                do
                {
                    cout << "\t=== Matriz compuesta de un gr�fico seg�n angulos ===\n\n";

                    cout << "1.- Obtener la perspectiva de los puntos originales de las figuras geom�tricas\n";
                    cout << "2.- Programador 2\n";
                    cout << "3.- Salir\n\n";
                    cin >> Submenu_2;

                    /*switch (Submenu_2)
                    {
                    case 1: zperspectiva();
                        break;
                    case 2:
                        break;
                    }*/

                } while (Submenu_2 < 1 || Submenu_2 > 3);
            }
            break;
            case 3:
            { // Generar nuevas coordenadas por quaterniones
                cout << "\t=== Generar nuevas coordenadas por quaterniones ===\n\n";
            }
            break;
        }
    }
    while (menu != 4);
    return 0;
}