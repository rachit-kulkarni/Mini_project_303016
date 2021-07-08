SRC = test.c\
 src/sqr.c\
 src/sum.c

OBJ =test.o\
 sum.o\
 sqr.o

INC = inc

CFLAGS = -I$(INC)




all.out:  $(OBJ) 
	gcc $^ -I$(INC) -o $@

%.o: src/%.c inc/fun.h
	gcc $^  -I$(INC) -c 


run: target 
	./all.out

clean:
	rm all.out *.o
