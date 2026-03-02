#include <iostream>
using namespace std;

// varaibile globale
int n, v[101], i, nrpar = 0, nrimpar = 0;

/*
  Se da un sir cu n elemente, numere naturale. Determinati diferenta in valoarea abosluta dintre
  numarul de valori pare din sir si numarul de valori impare din sir.
*/

// scrii o functie numita absoluteValue returneaza int

// return_type nume_functie(tip_parametru1 nume_parametru1, ...) {
// }

// int 

// a - variabila locala
int absoluteValue(int a) {
  int pozitiv_a;
  if (a < 0) {
    pozitiv_a = -a;
  } else {
    pozitiv_a = a;
  }

  return pozitiv_a;
}

int main() {
  // int a = 2;
  // int b = a + 2;

  // int addressAsDecimalA = reinterpret_cast<uintptr_t>(&a);
  // int addressAsDecimalB = reinterpret_cast<uintptr_t>(&b);

  // // & -> da-mi adresa lui a
  // std::cout << addressAsDecimalA << "\n";
  // std::cout << addressAsDecimalB << "\n";

  // n = undefined (nu are nicio valoare, teoretic)
  cin >> n;
  if(n > 101) {
    cout << "programul nu merge";
    return -1;
  }
  // n = 3

  for (i = 0; i <= n-1; i++) {
    cin >> v[i]; //v[0] = 1 v[1] = 2 v[2] = 3
    // obs: hai sa facem de la 0
    // obs: dc nu poti sa faci sa incepaa de la 1
  }


  for (i = 0; i <= n-1; i++) {
    // i = 1
    // v[1] = 1
    if(v[i] % 2 == 0) {
      nrpar++;
    } else {
      // nrimpar = 0
      nrimpar++;
      // nrimpar = 1
    }
  }

  cout << absoluteValue(nrpar - nrimpar) << "\n";
}