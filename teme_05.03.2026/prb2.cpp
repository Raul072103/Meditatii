#include <iostream>
using namespace std;

/*

  Ce se afiseaza? De ce?

  Sunt aceleasi valori? Daca da, de ce? Daca nu, de ce?

*/


int testFunction(int a) {
  cout << "testFunction adresa lui a = " << &a << "\n";
}

int main() {
  int a = 3;
  cout << "main adresa lui a = " << &a << "\n"; 
  
  testFunction(a);

  return 0;
}