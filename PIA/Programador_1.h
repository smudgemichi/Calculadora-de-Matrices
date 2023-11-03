
#include <iostream>
#include <conio.h>
#include <locale>
#include <Windows.h>


using namespace std;

// Operaciones de matrices

int dim = 1;

void Suma() 
{
    cout << "\t SUMA \n\n";
    cout << "para sumar deben tener la misma dimension las matrices A y B\n";

    // crear matrices
    cout << "ingrese dimension de las matrices: ";
    cin >> dim;
    float A_suma[dim][dim];
    float B_suma[dim][dim];
    float R_suma[dim][dim];
    // llenar A
    cout << "Matriz A\n";
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("[%d,%d]=", i + 1, j + 1);
            cin >> A_suma[i][j];
        }
        cout << endl;
        i++;
    }
    cout << endl;
    // llenar B
    cout << " \n";
    cout << "+ \n";
    cout << " \n";
    cout << "Matriz B\n";
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("[%d,%d]=", i + 1, j + 1);
            cin >> B_suma[i][j];
        }
        cout << endl;
        i++;
    }
    cout << endl;
    // sumar
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            R_suma[i][j] = A_suma[i][j] + B_suma[i][j];
        }
        i++;
    }
    // mostrar resultado
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            cout << R_suma[i][j];
        }
        i++;
        cout << endl;
    }
}

void Resta() 
{
    cout << "\t RESTA \n\n";
    cout << "para restar deben tener la misma dimension las matrices A y B\n";

    // crear matrices
    cout << "ingrese dimension de las matrices: ";
    cin >> dim;
    float A_resta[dim][dim];
    float B_resta[dim][dim];
    float R_resta[dim][dim];
    // llenar A
    cout << "Matriz A\n";
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("[%d,%d]=", i + 1, j + 1);
            cin >> A_resta[i][j];
        }
        cout << endl;
        i++;
    }
    cout << " " << endl;
    // llenar B
    cout << "si";
    cout << " \n";
    cout << "- \n";
    cout << " \n";
    cout << "Matriz B\n";
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            printf("[%d,%d]=", i + 1, j + 1);
            cin >> B_resta[i][j];
        }
        cout << endl;
        i++;
    }
    cout << endl;
    // restar
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            R_resta[i][j] = A_resta[i][j] - B_resta[i][j];
        }
        i++;
    }
    // mostrar resultado
    for (int i = 0; i < dim;)
    {
        for (int j = 0; j < dim; j++)
        {
            cout << R_resta[i][j];
        }
        i++;
        cout << endl;
    }
}

void Multiplicacion()
{
    cout << "\t PRODUCTO \n\n";
    cout << "condicion: para multimplicar la columna de la primer matriz debe ser igual a la fila de la segunda\n";
    cout << "A[a x n] x B[n x b]\n\n";

    float A_mult[10][10];
    float B_mult[10][10];
    float R_mult[10][10];
    int f1, f2, c1, c2;
    cout << "MATRIZ A\n";
    cout << "Ingrese numero de filas(maximo 10):";
    cin >> f1;
    cout << "Ingrese numero de columnas(maximo 10):";
    cin >> c1;
    cout << "MATRIZ B\n";
    cout << "Ingrese numero de filas(maximo 10):";
    cin >> f2;
    cout << "Ingrese numero de columnas(maximo 10):";
    cin >> c2;

    if (c1 == f2)
    {
        // llenar matrices
        cout << "Matriz A\n";
        for (int i = 0; i < f1;)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("[%d,%d]=", i + 1, j + 1);
                cin >> A_mult[i][j];
            }
            cout << endl;
            i++;
        }
        cout << endl;

        cout << "Matriz B\n";
        for (int i = 0; i < f2;)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("[%d,%d]=", i + 1, j + 1);
                cin >> B_mult[i][j];
            }
            cout << endl;
            i++;
        }
        cout << endl;

        for (int i = 0; i < f1; i++)
            for (int j = 0; j < c2; j++)
                R_mult[i][j] = 0;

        for (int i = 0; i < f1; i++)
            for (int j = 0; j < c2; j++)
                for (int z = 0; z < c1; z++)
                    R_mult[i][j] = R_mult[i][j] + A_mult[i][z] * B_mult[z][j];

        cout << endl;
        cout << "=== RESULTADO ===";
        cout << endl
            << endl;
        for (int i = 0; i < f1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout << R_mult[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else
        cout << "no cumple la condicion";
}

void zperspectiva()
{
    float zperp, x, y, z;
    system("cls");
    cout << "==============================================================\n";

    cout << "=== Obtener la perspectiva de los puntos originales ===\n\n";
    cout << "Ingrese el valor de Z-perspectiva: ";
    cin >> zperp;
    cout << "Ingrese el punto\n\n";
    cout << "\t[ x,y,z ]\n\n";
    cout << "x= ";
    cin >> x;

    cout << "y= ";
    cin >> y;

    cout << "z= ";
    cin >> z;
    cout << endl;
    cout << "--------------------------------------------------------------\n";
    cout << "Punto original: \n\n";
    printf("\t[ %0.2f , %0.2f , %0.2f ]\n\n", x, y, z);
    cout << "--------------------------------------------------------------\n";
    cout << "\nPunto Z-perspectiva: \n\n";
    x = x * (zperp / (zperp - z));
    y = y * (zperp / (zperp - z));
    printf("\t[ %0.2f , %0.2f ]\n", x, y);
    cout << "==============================================================\n\n\n";
}