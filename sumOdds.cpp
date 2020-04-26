#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
  int result = 0;
  int oddity;
  for (int i=0; i<size; i++){
    oddity = isOdd(a[i]);
    if (oddity==1){
      result +=a[i];
    } else{
      result = result;
    }
  }
  return result;
}
