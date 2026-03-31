#include <iostream>

using namespace std;

/*
    De multe ori uiti regulile de baza cand vine vorba de declarat varaibile.
    Tine minte cand declari o varaibila, variabila respectiva "traieste"
    in tot block-ul in care se afla.

    Mai pe romaneste, daca declari un x intre acolade, el va fi valabil 
    doar in acoladele respective.
*/

// Exp1 
void test() {
  // Y e valabil in toata functia test
  int y = 10;

  // i-ul e valabil doar in for loop-ul asta
  // dupa cum vezi am scris int i
  for (int i = 0; i < 10; i++) {

  }
}

// Exp2
void test2() {
  int i; // i-ul e valabil in toata functia test2

  for (i = 0; i < 10; i++) {

  }

  cout << i << '\n'; // aici i-ul e 10

  // aici redeclari i-ul, care va fi un i local la for loop
  // dar va exista confuzii cu cel declarat mai sus, asa ca nu fa niciodata asta!
  for (int i = 0; i < 10; i++) {

  }
}

// Exp3 
void test3() {
  int i;
  // Cred ca in ultima ora ai facut ceva de genul
  for (i = 0; i < 20; i++) {
    for (i = i+1; i<21; i++) {
      // aici nu e corect, pt ca i-ul tau isi tot schimba valorile
      // datorita faptului ca il folosesti in ambele for loop-uri
    }
  }

}

int main() {


}