#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countPrimes(int a[], int size) {
  int numprime=0;
  int result;
  for (int i=0;i<size; i++){
    result = isPrime(a[i]);
    if (result ==1){
      numprime+=1;
    } else {
      numprime = numprime;
    }
  }
    return numprime;

}
