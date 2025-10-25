#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string n1, n2, n3;

    cout << "Ingrese el primer digito" << endl;
    cin >> n1;
    cout << "Ingrese el segundo digito" << endl;
    cin >> n2;
    cout << "Ingrese el tercer digito" << endl;
    cin >> n3;

    if (n1.length() == 1 && n2.length() == 1 && n3.length() == 1){
        string concatenacion = n1 + n2 + n3;
        cout << " El numero es: " << concatenacion;
    }
    else 
    cout << "Valor invalido";

    return 0;
}