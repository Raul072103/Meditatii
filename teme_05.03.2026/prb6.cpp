#include <iostream>
using namespace std;

/*
  Ce se afiseaza? De ce?
*/

int main() {
  int vec[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int* ptr = vec;

  cout << vec[0] << "\n";
  cout << *ptr << "\n";

  cout << vec[1] << "\n";
  cout << *(ptr + 1) << "\n";

  
  cout << vec[2] << "\n";
  cout << *(ptr + 2) << "\n";
  
  cout << vec[3] << "\n";
  cout << *(ptr + 3) << "\n";

  return 0;
}