eggtest: eggtest.o egg.o max-min.o 
	gcc -o eggtest eggtest.o egg.o max-min.o

eggtest.o: eggtest.c egg.c all.h
	gcc -c eggtest.c egg.c

egg.o: egg.c max-min.c all.h
	gcc -c egg.c max-min.c

max-min.o: max-min.c all.h
	gcc -c max-min.c all.h
