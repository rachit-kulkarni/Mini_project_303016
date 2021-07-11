/**
 * @file logic.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <conversion_operation.h>

long int Bin_to_Dec(long int bin)
{  
           int dec=0,i=0;
            while(bin!=0)
            {
                int remainder=bin%10;
                if(remainder != 0 && remainder != 1){return -1;}
                bin=bin/10;
                dec=dec+remainder*pow(2,i);
                i++;
            }
        return dec;

}

long int Bin_to_Oct(long int bin)
{   
    long int dec = Bin_to_Dec(bin);
    long int oct = Dec_to_Oct(dec);
    return oct;
}
 
long int Bin_to_Hex(long int bin)
{   long int hexadecimal_number = 0, i = 1;
    
    while (bin!= 0)
    {   
        long int remainder = bin % 10;
        if(remainder != 0 && remainder != 1){return -1;}
        hexadecimal_number = hexadecimal_number + remainder * i;
        i = i * 2;
        bin = bin / 10;
    }
    return hexadecimal_number;
}
 
long int Dec_to_Bin(long int dec)
{  
    long int bin = 0;
    long int temp = 1;

    while (dec!=0)
    {
       long int  remainder = dec%2;
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
 /*
long int Dec_to_Hex(long int dec)
{
    long int bin = Dec_to_Bin(dec);
    long int hexa = Bin_to_Hex(bin);
    return hexa;   
}*/
 
long int Oct_to_Bin(long int oct)
{  
    if((oct %10) == 8 || (oct % 10) == 9 )
    {return -1;}
    else{
    long int dec = Oct_to_Dec(oct);
    long int bin = Dec_to_Bin(dec);
    return bin;
}   
}

long int Oct_to_Dec(long int oct)
{
    if((oct %10) == 8 || (oct % 10) == 9 ){
        return -1;
    }
    else{
        long int dec = 0, i = 0;
        while(oct != 0){
            dec += (oct%10) * pow(8,i);
            ++i;
            oct/=10;
        }

        i = 1;

        return dec;
    }
}
/*
long int Oct_to_Hex(long int oct)
{
    long int bin = Oct_to_Bin(oct);
    long int hex = Bin_to_Hex(bin);
    return hex; 
}
 
*/