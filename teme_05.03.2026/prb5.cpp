#include <iostream>
using namespace std;

/*

  Ce se afiseaza? De ce?

  Se schimba valoarea lui a in main dupa ce am apelat testFunction?
  Daca da, de ce? Daca nu, de ce?

*/


int testFunction(int *a) {
  *a = 5;
  cout << "testFunction valoarea lui a = " << a << "\n";
}

int main() {
  int a = 3;

  cout << "valoarea lui a = " << a << "\n"; 
  
  testFunction(&a);

  cout << "valoarea lui a = " << a << "\n"; 
  
  return 0;
}