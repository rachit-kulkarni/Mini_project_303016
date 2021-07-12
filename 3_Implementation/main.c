#include "conversion_operation.h"

int main(){
	long int binary,octal,hexadecimal,decimal;
	int choice = 1,option;
	srand(time(0));
	printf("\n !!Number System Converter!!\n" );
	for (int i = 0; i < 1; i++) {
        option = (rand() % (8)) -1;
    }
	while(choice){
	printf(" 1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");
	printf(" 4: Decimal to Octal.\n5: Octal to Decimal.\n6: Octal to Binary.\n");
	printf("\n Enter option ");
		switch(option){
			case 1:
				printf("\n Converting Binary to Decimal \n Enter Binary Value:");
				binary = 101101;
				decimal = Bin_to_Dec(binary);
				printf("%ld\n\n",decimal);choice = 0;
				break;
			
			case 2:
				printf("\n Converting Binary to Octal \n Enter Binary Value:");
				binary = 101101;
				octal = Bin_to_Oct(binary);
				printf("%ld\n\n",octal);choice = 0;
				break;
				
			case 3:
				printf("\n Converting Binary to Hexadecimal \n Enter Binary Value:");
				binary = 101101;
				hexadecimal = Bin_to_Hex(binary);
				printf("%lx\n\n",hexadecimal);choice = 0;
				break;
			
			case 4:
				printf("\n Converting Decimal to Octal \n Enter Decimal Value:");
				decimal = 625;
				octal = Dec_to_Oct(decimal);
				printf("%ld\n\n",octal);choice = 0;
				break;
				
			case 5:
				printf("\n Converting Octal to Decimal \n Enter Octal Value:");
				octal = 26;
				decimal = Oct_to_Dec(octal);
				printf("%ld\n\n",decimal);choice = 0;
				break;
			case 6:
				printf("\n Converting Octal to Binary \n Enter Octal Value:");
				octal = 67;
				binary = Oct_to_Bin(binary);
				printf("%ld\n\n",binary);choice = 0;
				break;
				
			default:
				printf("\nEnter valid Operation\n\n");
				break;
		}

	
	}




return 0;
}
