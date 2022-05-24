#include <iostream>
using namespace std;

int main()
{
    int a, b,k ;
    cout << "Dati primul numar: ";
    cin >> a;

    cout << "Dati al doilea numar: ";
    cin >> b;
    cout << endl;

    while (b != 0)
    {
        k = a % b;
        a = b;
        b = k;
    }

    cout << "Cel mai mare divizor comun al numerelor este:" << a << endl;

    return 0;
}