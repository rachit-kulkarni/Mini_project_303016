/**
 * @file logic.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */ 
#include "conversion_operation.h"

long int Bin_to_Dec(long int bin)
{//Function to convert binary to decimal
    long int dec=0,i=0;
    while(bin!=0)
    {
        long int remainder=bin%10;
        if((remainder != 0 )&&(remainder != 1)){return -1;}//This vlaidates the given input
        else{
        bin=bin/10;//extracts the last bit(units place,tens place etc)
        dec=dec+remainder*pow(2,i);//it just adds all these to get the decimal output
        i++;//this is for the units place or tens place etc..
    }
    }
    return dec;//returning the decimal value
}
 
long int Bin_to_Oct(long int bin)
{   long int dec = Bin_to_Dec(bin);//calling the binary to decimal converter
    long int oct = Dec_to_Oct(dec);//calling the decimal to octal converter
    return oct;//returning octal number
    
}
 
long int Bin_to_Hex(long int bin)
{
    long int  hexadecimalval = 0, i = 1;
 
    while (bin != 0)
    {
        long int remainder = bin % 10;
        if((remainder != 0 )&&(remainder != 1)){return -1;}//This vlaidates the given input
        else{
        hexadecimalval = hexadecimalval + remainder * i;//logic to obtain hexadecimal value
        i = i * 2;
        bin = bin / 10;//extracts the last bit
    }
    }
    return hexadecimalval;//returning the hexadecimal value
}

long int Dec_to_Oct(long int dec)
{  
    int octanum = 0, i = 1;//initialising all needed operands

    while (dec != 0)
    {
        octanum += (dec % 8) * i;//logic to obtain octal number
        dec /= 8;//continous division 
        i *= 10;
    }

    return octanum;//returning octal number
}

long int Oct_to_Dec(long int oct)
{   
    
   
    if((oct %10 == 8 )|| (oct %10 == 9)){
        return -1;//This vlaidates the given input
    }
    else{
    long int dec = 0, i = 0;
    while(oct != 0)
    {    
        dec += (oct%10) * pow(8,i);//logic to obtain the decimal values
        ++i;
        oct/=10;//extracting the last bit
    }

    i = 1;

    return dec;//returning decimal value
    }
}

long int Oct_to_Bin(long int oct)
{
   
    if((oct%10 == 8)||(oct % 10 == 9)){
            return -1;//This vlaidates the given input
    }
    else{
        int decimalnum = 0, i = 0;//initialising
    long binarynum = 0;
    while(oct != 0)
    {
	decimalnum = decimalnum + (oct%10) * pow(8,i);
	i++;
	oct = oct / 10;
    }

    //i is re-initialized
    i = 1;

    /* This loop converts the decimal number "decimalnum" to the binary
     * number "binarynum"
     */
    while (decimalnum != 0)
    {
	binarynum = binarynum + (decimalnum % 2) * i;
	decimalnum = decimalnum / 2;
	i = i * 10;
    }

    //Returning the binary number that we got from octal number
    return binarynum;
  
   
}
}
