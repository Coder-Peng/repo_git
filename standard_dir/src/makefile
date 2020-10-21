test:test.o other1.o other2.o
	gcc -o test test.o other1.o other2.o
test.o:test.c
	gcc -I../include -c test.c
other1.o:other1.c
	gcc -I../include -c other1.c
other2.o:other2.c
	gcc -I../include -c other2.c

.PHONY:clean
clean:
	rm *.o test
