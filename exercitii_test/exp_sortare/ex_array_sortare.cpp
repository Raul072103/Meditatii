#include <iostream>

// asta este libraria pt fisier, deci cand lucram cu fisiere trebuie inclusa
#include <fstream>

using namespace std;

/*
  Aici o sa citim un array dintr-un fisier si o sa il sortam, dupa care o sa
  il scriem in alt fisier.
*/

int main() {
  int v[100]; // tine minte ca alegem 100 ca sa ne asiguram ca poate sa tina
  // toate elementele, teoretic putem avea vectori mult mai largi decat 100
  int n; //lungimea la vecotr care va fi citita din fisier

  // ifstream e tipul fisierului de intrare, ca si cum declaram int x
  // unde int e tipul lui x, asa e si ifstream tipul lui "in".
  // "in" e numele variabilei, am putea pune ce vrem noi acolo. 
  ifstream in("in.txt");
  ofstream out("out.txt");

  /*
    De tinut minte cand faci in >> x;
    O sa iti sara peste spatii sau new line-uri de exemplu
    in.txt:
          23432     34234
    
    in >> x >> y; // x = 23432 y = 34234

    in.txt:
      34234324        
            423523
    
    in >> x >> y; // x = 34234324 y = 423523
    
    
    Si inca ceva, uita-te la pozitia semenelor ">>"
    Intuitiv e ca si cum ai zice baga in "x" sau baga in "y"
    in >> x >> y; // citeste din in

    Cand ai "<<", e ca si cum ai zice ia din x si baga in "out"
    out << x; // scrie in out
  */

  // cititm n
  in >> n;

  /*
    Obs de fiecare data cand citim dintr-un fisier, ce va poate merge 
    prost, se corupe fisiserul, saiu whatever, putem verifica ca a fost citit
    corect facand urmatoare chestie
    
    // asta inseamna "daca nu a mers ceva cand am citit din in executa ce e in block-ul de if"
    if (in >> n) {
      cout << "EROARE" << '\n';
      return -1;
    }
  */

  // citim vectorul
  // e ca si la citirea de la tastatura
  for (int i = 0; i < n; i++) {
    in >> v[i];
  }

  // Si acuma vine sortarea de vectorul, cel mai intuitiv algoritm zic eu
  // e "selection sort"
  // adica daca trebuie sa sortezi crescator, selectezi cel mai mic element
  // il pui in fata, si continui cu urmatorul element
  // 6 3 10 4 8 cel mai mic element intre idx-urile [0;4] este 3
  // 3 6 10 4 8 cel mai mic element intre idx-urile [1;4] // obs cum am scazut intervalul de cautare datorita faptului ca pe
  // prima pozitie avel cel mai mic element din tot array-ul
  // 3 4 10 6 8 cel mai mic element intre idx-urile [2;4] este 6
  // 3 4 6 10 8 [3;4]
  // 3 4 6 8 10 [4;4] GATA

  // Ai vazut ca practic comparam 2 cu doua si cand gasim unul mai mic facem 
  // swap

  // OBS i merge pana la n - 1, de ce?
  // OBS j incepe de la i + 1, de ce?
  for (int i = 0; i < n-1; i++) {
    for (int j = i+1; j < n; j++) {
      // daca sortam descrescator if (v[i] < v[j])
      if (v[i] > v[j]) {
        // swap
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }
  }


  // scriem in fisier
  for (int i = 0; i < n; i++) {
    out << v[i] << " "; // "baga" in out v[i] si "baga" un spatiul dupa el
  }

  // mai sus am deschis fisierele
  // aici le inchidem
  in.close();
  out.close();
  return 0;
}