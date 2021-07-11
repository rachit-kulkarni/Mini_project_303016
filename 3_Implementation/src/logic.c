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
{
    long int sum=0,i=0;
    while(bin!=0)
    {
        long int remainder=bin%10;
        if((remainder != 0 )&&(remainder != 1)){return -1;}
        else{
        bin=bin/10;
        sum=sum+remainder*pow(2,i);
        i++;
    }
    }
    return sum;
}
 
long int Bin_to_Oct(long int bin)
{   long int dec = Bin_to_Dec(bin);
    long int oct = Dec_to_Oct(dec);
    return oct;
    
}
 
long int Bin_to_Hex(long int bin)
{
    long int  hexadecimalval = 0, i = 1;
 
    while (bin != 0)
    {
        long int remainder = bin % 10;
        if((remainder != 0 )&&(remainder != 1)){return -1;}
        else{
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        bin = bin / 10;
    }
    }
    return hexadecimalval;
}

long int Dec_to_Oct(long int dec)
{  
    int octanum = 0, i = 1;

    while (dec != 0)
    {
        octanum += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }

    return octanum;
}

long int Oct_to_Dec(long int oct)
{   
    
    long int dec = 0, i = 0;
    if((oct %10 == 8 )|| (oct %10 == 9)){
        return -1;
    }
    else{
    while(oct != 0)
    {
        dec += (oct%10) * pow(8,i);
        ++i;
        oct/=10;
    }

    i = 1;

    return dec;
    }
}

long int Oct_to_Bin(long int oct)
{
    long int dec = 0, i = 0;
    long  bin = 0;
    if((oct%10 == 8)||(oct % 10 == 9)){
            return -1;
    }
    else{
    // converting octal to decimal
    while (oct != 0) {
        dec += (oct % 10) * pow(8, i);
        ++i;
        oct /= 10;
    }
    i = 1;

   // converting decimal to binary
    while (dec != 0) {
        bin += (dec % 2) * i;
        dec /= 2;
        i *= 10;
    }
    return bin;
}
}
