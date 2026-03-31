#include <iostream>
#include <fstream>

using namespace std;

/*
  Iti las niste exemple generale cum se lucreaza cu o matrice
*/

void test() {
  int matrix[100][100];

  // parcurgere element cu element. fiecare rand
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      // matrix[i][j]

      // matrix[0][0] matrix[0][1] ..... matrix[0][99]
      // ..
      // matrix[99][0] matrix[99][1] ..... matrix[99][99]
    }
  }

  // parcurgere element cu element, coloanele intai
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      // matrix[j][i] // tot ce s-a shcimbat a post i cu j
      
      // matrix[0][0] matrix[1][0] ..... matrix[99][0]
      // ..
      // matrix[0][99] matrix[1][99] ..... matrix[99][99]
    }
  }

  // tine minte matrix[row][col] row acceseaza rand-ul din matrice
  // col acceseaza coloana din matrice
}

int main() {
  // declaram o matrice de 100 de randuri cu 100 de coloane
  // practic un patrat de 100 pe 100
  int matrix[100][100];

  // noRows cate randuri avem
  // noCols cate coloane avem
  int noRows, noCols;

  ifstream in("in.txt");
  ofstream out("out.txt");

  in >> noRows >> noCols;

  for (int i = 0; i < noRows; i++) {
    for (int j = 0; j < noCols; j++) {
      in >> matrix[i][j];
    }
  }

  for (int i = 0; i < noRows; i++) {
    for (int j = 0; j < noCols; j++) {
      out << matrix[i][j] << " ";
    }
    out << '\n';
  }

  in.close();
  out.close();
  return 0;
}