#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>
#include "utility.h"

int countEvens(int a[], int size) {
  int numeven=0;
  int result ;
  for (int i=0;i<size; i++){
    result = isEven(a[i]);
    if (result ==1){
      numeven+=1;
    } else {
      numeven = numeven;
    }
  }
    return numeven;
}
