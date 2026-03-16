# Overview

Deci o sa ai de lucrat cu fisierele. Dupa cum am discutat si ora trecuta, fisierele
nu sunt nimic mai mult decat un sir lung de bytes, pe care noi alegem sa il interpretam
cum vrem noi.

In momentul acesta o sa ai de lucrat doar cu fisiere .txt (text files) din care
o sa citesti input-ul la o probleme si/sau o sa afisezi output-ul in alt fisier.

Ca sa iti faci o idee, pana acum citeam input-ul de la tastatura, dar dupa cum te
poti gandi daca am avea o problema unde trebuie sa introducem un vector de o lungime
de 100, si am avea cateva bug-uri in rezolvarea noastra, ar trebui sa introducem
un vector asa mare de mai multe ori la tastatura si am irosi timpul.

De asemenea fisierele ne permit sa avem input-ul mai structurat sa zic asa si
o sa obs ca e mult mai comod.

Hai sa luam un exemplu, sa zicem ca ai de rezolvat o problema in care vrei
sa citesti un numar n si un vector de n element dintr-un fisier si dupa sa 
afisezi acel vector in alt fisier.

O sa numesc fisierul de intrare in.txt si cel de afisare out.txt.

Daca format-ul fisierului de in.txt nu este dat, ramane la alegerea ta sa stabilesti
cum vrei sa primesti datele, in cazul obisnuit o sa arate ceva de genu.

in.txt
```
n
x1 x2 x3 x4 .... xn
```

Exp:
```
10
1 2 3 4 5 6 7 8 9 10
```

Ca sa citesti dintr-un fisier e foarte usor si trebuie sa urmezi urmatorii pasi:

main.cpp
```
#include <iostream>
#include <fstream> // asta este ceva nou ce trebuie sa incluzi cand lucrezi cu fisiere

using namespace std;

int main() {
  ifstream inputFile("in.txt"); // asa "deschizi" fisierul 

  // aici verifici daca a existat ceva erori cand ai deschis fisierul
  if (!inputFile) {
      cout << "Error: Could not open in.txt" << std::endl;
      return 1;
  }

  int n;
  int vec[100];
  if (inputFile >> n) {
      for (int i = 0; i < n; ++i) {
          inputFile >> vec[i];
      }
  }

  inputFile.close(); // asa il "inchizi"
  return 0;
}
```

Dupa cum poti observa mai sus este foare similar cu cin (ceea ce folosim sa
citim de la tastatura)

```
{
  int n;
 
  cin >> n;

  inputFile >> n;
}
```

Dupa cum te-ai putea gandi sa afisezi sau sa scri intr-un fisier va fi
la fel de usor.

Exp:
main.cpp
```
#include <iostream>
#include <fstream> // asta este ceva nou ce trebuie sa incluzi cand lucrezi cu fisiere

using namespace std;

int main() {
  ifstream inputFile("in.txt"); // asa "deschizi" fisierul de input 
  ofstream outputFile("out.txt"); // asa "deschizi" fisierul de output

  // aici verifici daca a existat ceva erori cand ai deschis fisierul
  if (!inputFile) {
      cout << "Error: Could not open in.txt" << std::endl;
      return 1;
  }

  
  // aici verifici daca a existat ceva erori cand ai deschis fisierul
  if (!outputFile) {
      cout << "Error: Could not open out.txt" << std::endl;
      return 1;
  }

  int n;
  int vec[100];
  if (inputFile >> n) {
      for (int i = 0; i < n; ++i) {
          inputFile >> vec[i];
      }
  }

  // aici afisam in fisier
  for (int i = 0; i < n; ++i) {
      outputFile << vec[i] << " ";
  }
  outputFile << "\n"; // asta depinde daca vrei sa nu sa pui un rand nou

  inputFile.close(); // asa il "inchizi"
  outputFile.close(); // dupa cum vezi orice fisier pe care il deschizi, trebuie
  // sa il si inchizi
  return 0;
}
```

Nu e nimica complicat, dar sa imi scri daca ceva este neclar!

Ca o observatie, nu ar trebui sa existe probleme sa rezolvi asta, mai degraba
in scrii mie daca ceva este neclar, asa ca as dori sa ai toate problemele
rezolvate pana joi.