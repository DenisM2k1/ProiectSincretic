### Moțocan Denis-Daniel
În matematică, algoritmul lui Euclid este o metodă eficientă de calcul al celui mai mare divizor comun (CMMDC)
CMMDC a două numere este cel mai mare număr care le divide pe ambele. 

**Algoritmul lui Euclid: Se dau două numere naturale A și B și se cere să se scrie un program care calculează cel mai mare divizor comun al numerelor A și B prin metoda recursivă.**



   ```
#include <iostream>
using namespace std;

int cmmdc(int a, int b) {
    if (a)
        return cmmdc(b % a, a);
    return b;
}

int main() {
    int a, b;
    cout << "Dati primul numar: ";
    cin >> a;

    cout << "Dati al doilea numar: ";
    cin >> b;
    cout << endl;

    cout << "Cel mai mare divizor comun al numerelor este:" << cmmdc(a, b) << endl;

    return 0;
}
   ```
   Am folosit metoda impartirilor succesive .



**Aceasta este organigrama functiei recursive**
```flow
st=>start: Start
op=>operation: cmmdc(a, b)
cond=>condition: a == 0
op2=>operation: a, b = b % a, a
ret=>operation: return b
e=>end: End

st->op
op->cond
cond(yes)->ret
cond(no)->op2
op2->op
ret->e
```

