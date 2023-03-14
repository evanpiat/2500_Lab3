#include "header.h"
#include <stdio.h>
#include <time.h>

int main(){
    
    int n=0;
    double time1 = 0.0;
    double time2 = 0.0; 
    double time3 = 0.0;
    double time4 = 0.0;
   
    // Function 1: recursiveFibonacci
    clock_t start1;
    clock_t end1;
    
    start1 = clock ();
    for (int c1 = 0; c1 < 1000000; c1++){
        recursiveFibonacci(n);
    }
    end1 = clock();
    time1 += (double)(end1 - start1)/CLOCKS_PER_SEC;

    // Function 2: iterativeFibonacci
    clock_t start2;
    clock_t end2;
    start2 = clock ();
    for (int c2 = 0; c2 < 1000000; c2++){
        iterativeFibonacci(n);
    }
    end2 = clock();
    time2 += (double)(end2 - start2) / CLOCKS_PER_SEC;

    
    // Function 3: recursiveSumNOdd
    clock_t start3;
    clock_t end3;

    start3 = clock ();
    for (int c3 = 0; c3 < 1000000; c3++){
        recursiveSumNOdd(n);
    }
    end3 = clock();
    time3 += (double)(end3 - start3) / CLOCKS_PER_SEC;

    // Function 4: iterativeSumNOdd
    clock_t start4;
    clock_t end4;

    start4 = clock ();
    for (int c4 = 0; c4 < 1000000; c4++){
        iterativeSumNOdd(n);
    }
    end4 = clock();
    time4 += (double)(end4 - start4) / CLOCKS_PER_SEC;

    // test
    printf("Enter an input value: ");
    scanf ("%d", &n);

    printf("***********************\n");
    printf("Sum of ");

    for (int counter=1;counter<= 2*n;counter+=2){
      if (counter == 1){
        printf("%d",counter);
      }
      else{
        printf(" + %d",counter);
      }
    }

    // print iterativeSumNOdd and time
    printf("\nUsing iteration = %d\n", iterativeSumNOdd(n));
    printf("Time elpased for iterative sum is %lf\n", time4);

    // print recursiveSumNOdd and time
    printf("Using recursive = %d \n", recursiveSumNOdd(n));
    printf("Time elpased for recursive sum is %lf \n", time3);

    printf("*********************** \n"); // new line

    // print iterativeFibonacci and time
    printf("Iteratively, Fibonacci (%d) = %d\n",n, iterativeFibonacci(n));
    printf("Time elpased for iterative Fibonacci is %lf \n", time2);

    //print recursiveFibonacci and time
    printf("Recursively, Fibonacci (%d) = %d\n",n, recursiveFibonacci(n));
    printf("Time elpased for recursive Fibonacci is %lf \n", time1);

    printf("*********************** \n"); // new line
    return 0;
}