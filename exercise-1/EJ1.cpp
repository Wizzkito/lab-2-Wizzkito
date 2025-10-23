#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    float suma, promedio, producto, menor, mayor;

    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un numero: ";
    cin >> b;
    cout << "Ingrese un numero: ";
    cin >> c;

    suma = a + b + c;
    cout << "La suma es:    " << suma << endl;

    promedio = (a + b + c)/3;
    cout << "El promedio es:    " << promedio << endl;

    producto = (a * b * c);
    cout << "El producto es:    " << producto << endl;

    mayor = a;
    menor = a;

    if (b > mayor) mayor = b;
    if (c > mayor) mayor = c;

    if (b < menor) menor = b;
    if (c < menor) menor = c;

    cout << "El menor es:    " << menor << endl;
    cout << "El mayor es:    " << mayor << endl;

    return 0;
}