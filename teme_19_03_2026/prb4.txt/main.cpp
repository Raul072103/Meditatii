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
  5 5
  1 2 3 4 5
  2 3 4 5 6
  3 4 5 6 7
  4 5 6 7 8
  5 6 7 8 9

  Trb sa definim ce este diagonala principala si cea secundara:
  1) Diagonala principala reprezinta diagonala unde elementele sunt aflate 
  pe pozitii unde randul si coloana sunt egale, mai pe romaneste, i == j, si
  mai pe romaneste matrix[0][0], matrix[1][1], matrix[2][2] ..

  In cazul de mai sus:
  1 3 5 7 9 

  2) Diagonala secundara, reprezinta cealalta diagonala :)) Adica mai pe romaneste
  matrix[0][4], matrix[1][3], matrix[2][2], matrix[3][1] si matrix[4][0]

  Obs, nu o sa iti zic care este "formula" pt i si j pentru ca o poti deduce
  de mai sus, dupa cum vezi i si j-ul par sa creasca, respectiv sa scada, intr-un
  anumit fel, bafta!

  In cazul de mai sus:
  5 5 5 5 5

  Ceea ce vreau sa faci este sa scri pe primul rand in out.txt elemenetele
  de pe diagonala principala si pe alt rand elementele de pe diagonala secundara.
*/

/*
Exemplu:

in.txt:
5 5
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9

out.txt
1 3 5 7 9
5 5 5 5 5

*/

int main() {
  // aici trb sa declari ce ti-am arata in exemplu, adica fisiele

  // declari un vector de vectori
  int matrix[100][100];
  int noRows, noCols; //n, m

  // citesti din in.txt noRows, noCols
  
  // ...

  // aici trb sa inchizi fisierele
  return 0;
}