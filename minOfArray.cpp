#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int minOfArray(int a[], int size) {
  if (size < 1) {
    std::cerr << "ERROR: minOfArray called with size < 1" << std::endl;
    exit(1);
  }
  int result=a[0];
  for (int j=1; j<size; j++) {
    if (a[j] < result)
      result = a[j];
  }
  return result;
}
