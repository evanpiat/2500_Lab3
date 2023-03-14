#include "header.h"
#include <stdio.h>
#include <time.h>

int recursiveFibonacci(int n){

    if (n<=1){
        return n;
    }
    return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
}