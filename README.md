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
  Am folosit metoda impartirilor succesive.
  
  Exista un singur caz special pentru algoritmii de calculare a cmmdc, acesta fiind  cand minim unul dintre numere este 0 iar raspunsul este celalat numar care este diferit de 0.
  
  Algoritmul lui Euclid rezolva cazul de la sine .


**Aceasta este organigrama functiei recursive**


![image](https://user-images.githubusercontent.com/102667646/170381952-db59ab99-fcb9-4e60-8044-60d420538fdd.png)

