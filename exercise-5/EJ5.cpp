#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int funcion(int x)
{
    return x*x*x - x*x + 5;
}

int main()
{
    vector<int> v1 = {0, 1, 2, 3, 4, 5};
    cout << "***************" << endl;
    cout << setw(0) << "x" << setw(10) << "f(x)" << endl;
    cout << "***************" << endl;

    for (int x : v1)
    {
        cout << setw(0) << x << setw(10) << funcion(x) << endl;
    }
    cout << "***************" << endl;
    
    return 0;

}