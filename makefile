compile : list.c
	gcc list.c
run: compile
	./a.out
clean:
	rm *.o
	rm *~
