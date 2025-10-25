#include <iostream>
using namespace std;

int main ()
{
    int n1;

    cout << "Ingrese el valor" << " ";
    cin >> n1;

    if (n1 % 2 == 0)
    {
        cout << n1 << " " << "es par";
    }
    else 
    cout << n1 << " " << "no es par";

return 0;
}