## Folder Structure

|**inc(Include Files)**|**src(Source File)**|**test(Test file)**|**unity(Unity testing files)**|
|----------------------|--------------------|-------------------|------------------------------|
|`conversion_operation.h`|`logic.c`|`operations_test.c`|`unity.c unity.h unity_internals.h`|

**The folder also contains main.c and the make file to generate the executable file**
**To run the code, run make all on the terminal and then make run**
**As we should not take in any inputs from a user,the code generates random options to convert between the various number systems and coverts it correctly**
