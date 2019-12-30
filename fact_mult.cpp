#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int factorial(int n);
float *multiplica(float *x, float *y, int N);

int main(int argc, char const *argv[]) {

  int n;
  cout << "ingrese n" << endl;
  cin >> n;

  int *array1 = new int [n];

  for (size_t i = 0; i < n; i++) {
    array1[i] = factorial(i);
  }

  for (size_t j = 0; j < n; j++) {
    cout << "factoriales[" << j << "]= " << array1[j] << endl;
  }

  ifstream file1;
  ifstream file2;

  file1.open("valores_x.txt");
  file2.open("valores_y.txt");
  float plaka;
  int N=0;
  while(file1 >> plaka){
      N ++;
  }

  file1.clear();
  file1.seekg(0);

  float *x = new float [N];
  float *y = new float [N];
  float *mult = new float [N];

  for (size_t i = 0; i < N; i++) {
    file1 >> x[i];
    file2 >> y[i];
  }

  for (size_t j = 0; j < N; j++) {
    cout << "x[" << j << "]= " << x[j] << " , " << "y[" << j << "]= " << y[j] << endl;
  }

  mult = multiplica(x,y,N);

  for (size_t j = 0; j < N; j++) {
    cout << "x*y[" << j << "]= " << mult[j] << endl;
  }

  file1.close();
  file2.close();

  delete[] array1;
  delete[] x;
  delete[] y;
  delete[] mult;
  return 0;
}
int factorial(int n){
  if(n == 0){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}
float *multiplica(float *x, float *y, int N){

  float *m = new float [N];

  for (size_t i = 0; i < N; i++) {
    m[i] = x[i]*y[i];
  }

  return m;
}
