#include <iostream>
#include <stdlib.h>

using namespace std;

void relleno(float *mat, int filas, int cols);
void imprime(float *mat, int filas, int cols);

int main() {

  int num;

  cout << "Escriba un número del 3 al 11" << endl;
  cin >> num;

  if(num<3 | num>11){
    cout << "Error: El número no está en el rango indicado" << endl;
  }

  int filas = num+2;
  int cols = num;
  float *M = new float [filas*cols];
  imprime(M,filas,cols);
  relleno(M, filas, cols);
  imprime(M,filas,cols);

  delete[] M;

  return 0;
}
void relleno(float *mat, int filas, int cols){
  for (int i = 0; i < filas; i++) {
    for (int j = 0; j < cols; j++) {
      mat[i*cols+j] = i+j;
    }
  }
}
void imprime(float *mat, int filas, int cols){
  for (size_t i = 0; i < filas; i++) {
    for (size_t j = 0; j < cols; j++) {
      if(j == cols-1){
        cout << " " << mat[i*cols+j] << endl;
      }
      else{
        cout << " " << mat[i*cols+j];
      }
    }
  }
}
