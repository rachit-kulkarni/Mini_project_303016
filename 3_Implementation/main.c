#include "conversion_operation.h"

int main(){
	long int binary,octal,hexadecimal,decimal;
	int choice = 1,option=6;
	srand(time(0));
	printf("\n !!Number System Converter!!\n" );
	for (int i = 0; i < 1; i++) {
        option = (rand() % (6)) +1;//SINCE WE CANNOT USE SCANF() I AM GENERATING RANDOM VALID INPUT TO SHOW THE FUNCTIONALITY
    }
	while(choice){
	printf(" 1: Binary to Decimal.\n 2: Binary to Octal.\n 3: Binary to Hexa-Decimal.\n");
	printf(" 4: Decimal to Octal.\n 5: Octal to Decimal.\n 6: Octal to Binary.\n");
	printf("\n option = %d ",option);
		switch(option){
			case 1:
				binary = 101101;//SINCE WE CANNOT USE SCANF() Random input is assigned and worked on
				printf("\n Converting Binary to Decimal \n binary = %ld",binary);	
				decimal = Bin_to_Dec(binary);
				printf("\n%ld\n\n",decimal);choice = 0;
				break;
			
			case 2:
				binary = 101101;//SINCE WE CANNOT USE SCANF() Random input is assigned and worked on
				printf("\n Converting Binary to Octal \n Binary Value: %ld ",binary);
				octal = Bin_to_Oct(binary);
				printf("\n%ld\n\n",octal);choice = 0;
				break;
				
			case 3:
				binary = 101101;//SINCE WE CANNOT USE SCANF() Random input is assigned and worked on
				printf("\n Converting Binary to Hexadecimal \n Binary Value: %ld ",binary);
				hexadecimal = Bin_to_Hex(binary);
				printf("\n%lx\n\n",hexadecimal);choice = 0;
				break;
			
			case 4:
				decimal = 625;//SINCE WE CANNOT USE SCANF() Random input is assigned and worked on
				printf("\n Converting Decimal to Octal \n Decimal Value: %ld",decimal);	
				octal = Dec_to_Oct(decimal);
				printf("\n%ld\n\n",octal);choice = 0;
				break;
				
			case 5:
				octal = 26;//SINCE WE CANNOT USE SCANF() Random input is assigned and worked on
				printf("\n Converting Octal to Decimal \n Octal Value: %ld",octal);
				decimal = Oct_to_Dec(octal);
				printf("\n%ld\n\n",decimal);choice = 0;
				break;
			case 6:
				octal = 67;//SINCE WE CANNOT USE SCANF() Random input is assigned and worked on
				printf("\n Converting Octal to Binary \n Octal Value: %ld",octal);
				binary = Oct_to_Bin(octal);
				printf("\n%ld\n\n",binary);choice = 0;
				break;
				
			default:
				printf("\nEnter valid Operation\n\n"); choice = 0;
				break;
		}

	
	}




return 0;
}
