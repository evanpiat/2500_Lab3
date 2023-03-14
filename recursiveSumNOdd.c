#include "header.h"
#include <stdio.h>
#include <time.h>

int recursiveSumNOdd (int n){
    if (n <= 1){
        return n;
    }else{
        return recursiveSumNOdd(n-1)+(2*n-1);
    }
}