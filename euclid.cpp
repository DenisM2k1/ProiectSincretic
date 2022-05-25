#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    if (a)
        return cmmdc(b % a, a);
    return b;
}

int main()
{
    int a, b;
    cout << "Dati primul numar: ";
    cin >> a;

    cout << "Dati al doilea numar: ";
    cin >> b;
    cout << endl;

    cout << "Cel mai mare divizor comun al numerelor este:" << cmmdc(a, b) << endl;

    return 0;
}
