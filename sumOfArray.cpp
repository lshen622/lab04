#include "arrayFuncs.h"

int sumOfArray(int a[], int size) {
  int result = 0;
  for (int i =0; i<size; i++){
    result +=a[i];
  }
  return result;
}
