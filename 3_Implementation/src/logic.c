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
    int remainder,sum=0,i=0;
    while(bin!=0)
    {
        remainder=bin%10;
        bin=bin/10;
        sum=sum+remainder*pow(2,i);
        i++;
    }
     
    return sum;
}
 
long int Bin_to_Oct(long int bin)
{   long int octalnum = 0, j = 1, remainder;
    while (bin != 0)
    {
        remainder = bin % 10;
        octalnum = octalnum + remainder * j;
        j = j * 2;
        bin = bin / 10;
    }
    return octalnum;
}
 
long int Bin_to_Hex(long int bin)
{
    long int  hexadecimalval = 0, i = 1, remainder;
 
    while (bin != 0)
    {
        remainder = bin % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        bin = bin / 10;
    }
    
    return hexadecimalval;
}
 
long int Dec_to_Bin(long int dec)
{
    long int bin = 0;
    int remainder, temp = 1;

    while (dec!=0)
    {
        remainder = dec%2;
        dec = dec / 2;
        bin = bin + remainder*temp;
        temp = temp * 10;
    }
    return bin;
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
 
long int Dec_to_Hex(long int dec)
{
    long int bin = Dec_to_Bin(dec);
    long int hexa = Bin_to_Hex(bin);
    return hexa;   
}
 
long int Oct_to_Dec(long int oct)
{
    long int dec = 0, i = 0;

    while(oct != 0)
    {
        dec += (oct%10) * pow(8,i);
        ++i;
        oct/=10;
    }

    i = 1;

    return dec;
}

long int Oct_to_Bin(long int oct)
{
    long int dec = 0, i = 0;
    long  bin = 0;

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

long int Oct_to_Hex(long int oct)
{
    int rem[50],len=0,decimal=0,i=0,num,ans=0;
    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    i=0;
    while(decimal!=0)
    {
        rem[i]=decimal%16;
        decimal=decimal/16;
        i++;
        len++;
    }
    printf("\nEquivalent Hexa-Decimal Number : ");
    for(i=len-1;i>=0;i--)
    {
        switch(rem[i])
        {
            case 10:
                printf("A"); break;
             
            case 11:
                printf("B"); break;
                 
            case 12:
                printf("C"); break;
                 
            case 13:
                printf("D"); break;
                 
            case 14:
                printf("E"); break;
                 
            case 15:
                printf("F"); break;
                 
            default:
                printf("%d",rem[i]);
        }
         
    }
}
