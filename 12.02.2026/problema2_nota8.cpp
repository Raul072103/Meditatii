#include <iostream>
using namespace std;

/*
  Se citeste un vector cu n elements, numere naturale. Sa se afiseze
  elementele vectorului in urmatoarea ordine: primul, ultimul, al doilea,
  penultimul etc.
*/

int n, v[101], i, limita;

int main() {
  cin >> n;
  if (n > 101) {
    cout << "programul nu merge";
    return -1;
  }
  
  for(i = 0; i < n; i++) {
      cin >> v[i];
  }
  // i = 0  1  2  3
  // v = 10 20 30 40
  // if(n % 2 == 0){
  //   limita = n/2;
  // } else {
  //   limita = n/2+1;
  // }
  
  // n = 5
  // 10 20 30 40 50
  // OUT: 10 50 20 40
  for(i = 0; i < n/2; i++) {
    cout << v[i] << " " << v[n-i-1] << " ";
  }

  if (n % 2 != 0){
    cout << v[n/2];
  }



  // v = 1 2 3 4
  // 1 4 2 3

  // v = 10 50 25 30 60 78
  // 10 78 50 60 25 30

}