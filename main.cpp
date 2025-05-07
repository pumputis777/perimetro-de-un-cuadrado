/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float lado;  // declaro la primera variable de tipo float 
    float perimetro; // declaro la segunda variable de tipo float
     
    cout << "Ingrese el valor del lado del cuadrado: ";  // Solicitar al usuario que ingrese el valor del lado
    cin >> lado; // guarda el valor que ingreso el usuario en la variable lado

    perimetro = 4 * lado; // Calcula el perímetro multiplicando el valor de la variable lado por 4 y almacena el resultado en la variable perimetro

    cout << "El perímetro del cuadrado es: " << perimetro << endl; // Muestra el valor guardado en la variable perimetro

    return 0; // aca termina el programa
}
