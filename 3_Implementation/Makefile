SRC = logic.c

OBJ =logic.o
 

INC = inc

CFLAGS = -I$(INC)




all.out:  $(OBJ) 
	gcc $^ -I$(INC) -lm -o $@

%.o: src/%.c inc/conversion_operation.h
	gcc $^  -I$(INC) -c 


run: target 
	./all.out

clean:
	rm all.out *.o
