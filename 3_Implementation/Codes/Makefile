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

INC = -Iinc\
-Iunity

all: $(SRC) $(TEST_SRC) $(BUILD_DIR)
	gcc $(SRC) $(TEST_SRC) $(INC) -lm -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

run: all
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)