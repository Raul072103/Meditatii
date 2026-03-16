#include <iostream>
#include <fstream>

using namespace std;

/*
  Problema este in felul urmator:
  - in.txt este fisierul de input, out.txt este de output. 

  Vei avea de citit o matrice de data aceasta cu n randuri si m coloane:
  Tine minte o matrice este un vector de vectori, unde numarul de vectori
  este n(adica numarul de randuri) iar numarul de coloane este m (adica numarul
  de elemente din fiecare vector)

  In cazul de mai jos n = 5, sau numarul de randuri = 5, iar m = 6, sau numarul
  de coloane este 6.
  5 6
  1 2 3 4 5 6
  2 3 4 5 6 7
  3 4 5 6 7 8
  4 5 6 7 8 9
  5 6 7 8 9 1

  Ceea ce vreau sa faci este sa afisezi matricea in out.txt
*/

/*
Exemplu:

in.txt:
5 6
1 2 3 4 5 6
2 3 4 5 6 7
3 4 5 6 7 8
4 5 6 7 8 9
5 6 7 8 9 1

out.txt
1 2 3 4 5 6
2 3 4 5 6 7
3 4 5 6 7 8
4 5 6 7 8 9
5 6 7 8 9 1

*/

int main() {
  // aici trb sa declari ce ti-am arata in exemplu, adica fisiele

  // declari un vector de vectori
  int matrix[100][100];
  int noRows, noCols; //n, m

  // citesti din in.txt noRows, noCols
  
  for (int i=0; i<noRows;i++) {
    for (int j=0;j<noCols;j++) {
      // citesti matrix[i][j]
    }
  }

  
  for (int i=0; i<noRows;i++) {
    for (int j=0;j<noCols;j++) {
      // scri in fisier matrix[i][j]
    }
  }

  // aici trb sa inchizi fisierele
  return 0;
}