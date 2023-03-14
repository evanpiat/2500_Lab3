lab: main.o iterativeFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o recursiveFibonacci.o
	gcc -Wall -std=c99 main.o iterativeFibonacci.o iterativeSumNOdd.o recursiveSumNOdd.o recursiveFibonacci.o -o lab

main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c

iterativeFibonacci.o: iterativeFibonacci.c header.h
	gcc -Wall -std=c99 -c iterativeFibonacci.c

iterativeSumNOdd.o: iterativeSumNOdd.c header.h
	gcc -Wall -std=c99 -c iterativeSumNOdd.c

recursiveFibonacci.o: recursiveFibonacci.c header.h
	gcc -Wall -std=c99 -c recursiveFibonacci.c

recursiveSumNOdd.o: recursiveSumNOdd.c header.h
	gcc -Wall -std=c99 -c recursiveSumNOdd.c

clean: 
	rm *.o lab