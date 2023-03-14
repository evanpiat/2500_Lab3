#include "header.h"
#include <stdio.h>
#include <time.h>

int iterativeSumNOdd(int n){ 
    int sum=0;
    for (int i=1;i <= 2*n;i+=2){
        sum = sum + i; 
    }
    return sum;
}