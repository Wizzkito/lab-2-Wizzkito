#include <iostream>
using namespace std;

int main ()
{
    int a, b, c;

    cout << "Ingrese los tres valores" << endl;
    cin >> a >> b >> c;

    int mayor = max(a, max(b,c));
    int menor = min(a, min(b,c));

    int medio = a + b + c - menor - mayor;
    cout << "El valor de en medio es" << " " << medio;

    return 0;

}