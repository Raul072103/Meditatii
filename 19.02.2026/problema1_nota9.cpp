#include <iostream>

using namespace std;

/*
  Se citeste un vector cu n elemente, numere naturale. Sa se inlocuiasca ultimul
  element prim din vector cu 0, apoi sa se afiseze vectorul.
*/

// cuvant1_cuvant2 -> snake case
// cuvant1Cuvant2 -> camel case
// int citire_vector

// v -> pasat prin adresa("referinta")
// n -> pasat ca valoare
int citireVector(int v[101]) {
  int i, n;
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> v[i];
  }
  return n;
}

void afisareVector(int v[], int lungimeVector) {
  int i;
  for(i = 0; i < lungimeVector; i++) {
    cout << v[i] << " ";
  }
}


// returneaza 0 -> daca e numar prim
// returneaza 1 -> daca nu e numar prim
int numarPrim(int x){
  int a;
  for (a = 2; a < x; a++) {
    if(x % a == 0) { 
      return 1;
    } 
  }
  
  return 0;
}


int main() {
  int v[101], lungimeVector, i;
  lungimeVector = citireVector(v);
  
  for (i = lungimeVector-1; i >= 0; i--){
    if (numarPrim(v[i]) == 0) {
       v[i] = 0;
       break;
    }
  }

  afisareVector(v, lungimeVector);
}