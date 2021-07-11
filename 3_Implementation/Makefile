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

PROJ_NAME = LOGIC
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/logic.c

TEST_SRC = operations_test.c\
unity/unity.c

TEST_OUTPUT = $(Build)/Test_$(PROJECT_NAME).out
 
INC = -Iinc\
-Iunity

INCLUDE_LIBS = 

all: $(SRC) $(TEST_SRC) $(BUILD_DIR)
	gcc -g $(SRC) $(TEST_SRC) $(INC) -lm -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests

staticcheck:
	cppcheck src/logic.c operations_test.c inc/conversion_operation.h 

	
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT) *.gcda *.gcno *.gcov


# Create new build folder if not present
$(BUILD):
	mkdir build