#include <iostream>
using namespace std;

/*
  
  Aici o sa ai de decomentat pe rand fiecare cout si sa vezi ce se afiseaza
  si sa explici de ce?

  Recomandarea mea este sa rulezi programul de mai multe ori, in anumite cazuri
  o sa se afiseze aceleasi valori, in altele nu.

  O sa ma asigur ca ai rulat programele de mai multe ori, fie o sa trebuiasca
  sa gasesc anumite observatii in raspunsurile tale observate de tine
  ruland programul de mai multe ori, fie o sa te intreb eu si o sa ma astept
  sa stii :))

*/


int main() {
  int a = 2;
  int *ptr = &a;

  *ptr = 3;
  // ce se afiseaza? de ce?
  cout << ptr << "\n";

  // ce se afiseaza? de ce?
  // cout << *ptr << "\n";

  a = 5;
  
  // ce se afiseaza? de ce?
  // cout << *ptr << "\n";

  *ptr = 10;

  // ce se afiseaza? de ce?
  // cout << a << "\n";

  ptr = ptr + 10;
  // ce se afiseaza? de ce?
  // cout << ptr << "\n";

  // ce se afiseaza? de ce?
  // cout << *ptr << "\n"'

  return 0;
}