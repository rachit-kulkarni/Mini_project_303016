PROJ_NAME = CONVERSION_LOGIC
TEST_PROJ_NAME = Test_$(PROJ_NAME)

#all source files
SRC =src/logic.c

#all test source files

TEST_SRC = test/operations_test.c\
unity/unity.c

COV_SRC = operations_test.c

INC_H = inc
INC_T = unity


#selecting executable file

ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC)) -lm
	

run:
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC)) -lm
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))


coverage:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c  test/operations_test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)

doc:
	make -C ./documentation

cppcheck:
	cppcheck --enable=all  --suppress=missingIncludeSystem $(SRC) main.c 
	
valgrind:
	valgrind  ./$(TEST_PROJ_NAME).$(EXEC)
	
clean:
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.txt

debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC) -lm
	gdb $(PROJ_NAME).$(EXEC)


$(BUILD):
	mkdir 
	

