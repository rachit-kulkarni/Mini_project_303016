#ifndef __CONVERSION_OPERATIONS_H__
#define __CONVERSION_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


long int Bin_to_Dec(long int); /* Takes in the input of a binary number and converts it to Decimal*/ 
long int Bin_to_Oct(long int); /* Takes in the input of a binary number and converts it to Octal*/
long int Bin_to_Hex(long int); /* Takes in the input of a binary number and converts it to Hexadecimal*/
long int Dec_to_Bin(long int); /* Takes in the input of a decimal number and converts it to binary*/
long int Dec_to_Oct(long int); /* Takes in the input of a decimal number and converts it to octal*/
long int Dec_to_Hex(long int); /* Takes in the input of a decimal number and converts it to hexadecimal*/
long int Oct_to_Bin(long int); /* Takes in the input of a octal number and converts it to binary*/
long int Oct_to_Dec(long int); /* Takes in the input of a octal number and converts it to decimal*/
long int Oct_to_Hex(long int); /* Takes in the input of a octal number and converts it to Hexadecimal*/
void Hex_to_Bin(char []);      /* Takes in the input of a hexadecimal number and converts it to binary*/
void Hex_to_Dec(char []);      /* Takes in the input of a hexadecimal number and converts it to Decimal*/
void Hex_to_Oct(char []);      /* Takes in the input of a hexadecimal number and converts it to octal*/
 
#endif 
