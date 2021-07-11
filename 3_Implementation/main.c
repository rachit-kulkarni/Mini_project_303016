#include "conversion_operation.h"

int main(){
	long int binary,octal,hexadecimal,decimal;
	int choice = 1,option ;
	printf("\n !!Number System Converter!!\n" );
	
	
	while(choice){
	
	printf(" 1: Binary to Decimal.\n2: Binary to Octal.\n3: Binary to Hexa-Decimal.\n");
	printf(" 4: Decimal to Octal.\n5: Octal to Decimal.\n6: Octal to Binary.\n");
	printf("\n Enter option ");
	scanf("%d",&option);
		switch(option){
			case 1:
				printf("\n Converting Binary to Decimal \n Enter Binary Value:");
				scanf("%ld",&binary);
				decimal = Bin_to_Dec(binary);
				printf("%ld\n\n",decimal);
				break;
			
			case 2:
				printf("\n Converting Binary to Octal \n Enter Binary Value:");
				scanf("%ld",&binary);
				octal = Bin_to_Oct(binary);
				printf("%ld\n\n",octal);
				break;
				
			case 3:
				printf("\n Converting Binary to Hexadecimal \n Enter Binary Value:");
				scanf("%ld",&binary);
				hexadecimal = Bin_to_Hex(binary);
				printf("%lx\n\n",hexadecimal);
				break;
			
			case 4:
				printf("\n Converting Decimal to Octal \n Enter Decimal Value:");
				scanf("%ld",&decimal);
				octal = Dec_to_Oct(decimal);
				printf("%ld\n\n",octal);
				break;
				
			case 5:
				printf("\n Converting Octal to Decimal \n Enter Octal Value:");
				scanf("%ld",&octal);
				decimal = Oct_to_Dec(octal);
				printf("%ld\n\n",decimal);
				break;
			case 6:
				printf("\n Converting Octal to Binary \n Enter Octal Value:");
				scanf("%ld",&octal);
				binary = Oct_to_Bin(binary);
				printf("%ld\n\n",binary);
				break;
				
			default:
				printf("\nEnter valid Operation\n\n");
				break;
		}

	
	}




return 0;
}