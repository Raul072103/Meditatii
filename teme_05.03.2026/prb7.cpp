#include <iostream>
using namespace std;

/*
  Ce se afiseaza? De ce?

  Ruleaza cu initializeazVec
  Ruleaza cu initializeazVecVarianta2

  Spune-mi ce observi?
*/

void initializeazVec(int* vec, int n) {
  for (int i = 0; i < n; i++) {
    vec[i] = i;
  }
}

void initializeazVecVarianta2(int* vec, int n) {
  for (int i = 0; i < n; i++) {
    *(vec + i) = i;
  }
}

int main() {
  // Cum este vecotrul vec, este initializat? sau nu este? de ce?
  int vec[100];
  int n = 10;
  
  initializeazVec(vec, n);
  // initializeazVecVarianta2(vec, n);

  for (int i=0;i<n;i++) {
    cout << vec[i] << " ";
  }
  cout << "\n";

  return 0;
}