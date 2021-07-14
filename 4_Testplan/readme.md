## Functions to convert from one system to another

Sl No|Function    |Description|
-----|------------|-----------|
`1`  | Bin_to_Dec |Converts valid binary input to Decimal.Returns -1 for invalid data.|
`2`  | Bin_to_Oct |Converts valid binary input to Octal.Returns -1 for invalid data.|
`3`  | Bin_to_Hex |Converts valid binary input to Hexadecimal.Returns -1 for invalid data.|
`4`  | Dec_to_Oct |Converts  Decimal input to Octal.|
`5`  | Oct_to_Dec |Converts valid Octal input to Decimal.Returns -1 for invalid data.|
`6`  | Oct_to_Bin |Converts valid Octal input to Binary.Returns -1 for invalid data.|


## Functions to test the logic.c
   Using the Unity test framework. We pass 2 cases for the function to pass/work correctly and we pass 2 testcases where it fails and returns -1.
  
  The functions written to test the passing cases are as follows:

 Sl No  |       Pass_Functions            |         
 -------|---------------------------------|
  `1`   |  `void test_Bin_to_Dec(void)`   | 
  `2`   |  `void test_Bin_to_Oct(void)`   |
  `3`   |   `void test_Bin_to_Hex(void)`  |
  `4`   |   `void test_Dec_to_Oct(void)`  |
  `5`   |   `void test_Oct_to_Dec(void)`  |
  `6`   |   `void test_Oct_to_Bin(void)`  |
  
  The functions written to test the failing cases are as follows:
  
 Sl No  |       Fail_Functions                 |         
--------|--------------------------------------|
  `1`   |  `void test_fail_Bin_to_Dec(void)`   | 
  `2`   |  `void test_fail_Bin_to_Oct(void)`   |
  `3`   |   `void test_fail_Bin_to_Hex(void)`  |
  `4`   |   `void test_fail_Dec_to_Oct(void)`  |
  `5`   |   `void test_fail_Oct_to_Dec(void)`  |
  `6`   |   `void test_fail_Oct_to_Bin(void)`  |





# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Checking all operation modes work fine|  By giving Choice between 1-6|All the modes of operations execute correctly|Obtained right results |Requirement based |


## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Checking whether user is able to convert from the option entered| By giving different options and input |Converted data|obtained it correctly|Requirement based |
|  L_02       |Checking each function written individually to validate if it converts valid data|  Valid Input data in one number system and then the choice of operation|function returns valid output in converted number system|Obtained required output|Scenario based    |
|  L_03       |Checking each function written individually to validate if it doesn't converts invalid data| invalid data in long int format|-1|-1|Boundary based    |













