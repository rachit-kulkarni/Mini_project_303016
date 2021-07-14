## Folder Structure

|**inc(Include Files)**|**src(Source File)**|**test(Test file)**|**unity(Unity testing files)**|
|----------------------|--------------------|-------------------|------------------------------|
|`conversion_operation.h`|`logic.c`|`operations_test.c`|`unity.c unity.h unity_internals.h`|

## How to run Number System Converter

1) Clone or Download the repository in your system
2) Navigate to 3_Implementation folder
3) Open your terminal here with this path and run `make`
4) To See outputs run `make run` .
   **If you want to give different inputs to the functions open main.c and change the values in each of the function**
   
5) To see Testing of the code run `make test`
6) For Valgrind run `make valgrind`
7) For Cppcheck run `make cppcheck`
8) For code coverage run `make coverage`
