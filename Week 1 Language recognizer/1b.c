//Implementation of Language recognizer for set of all strings ending with two symbols of same type.

#include <stdio.h>
void main(){
 	int state=0,i=0;
 	char current,input[20];
 	printf("Enter input string : ");
 	scanf("%s",input);
	while((current=input[i++])!='\0')
	{
	 	switch(state)
	 	{
	 		case 0: if(current=='0')
	 					state=1;
	 				else if(current=='1')
	 					state=3;
	 				else
	 				{
	 					printf("Invalid token");
	 					exit(0);
	 				}
	 				break;
	 		case 1: if(current=='0')
					 	state=2;
					else if(current=='1')
						state=3;
					else
					{
						printf("Invalid token");
						exit(0);
	 				}
					break;
	 		case 2: if(current=='0')
						state=2;
	 				else if(current=='1')
	 					state=3;
	 				else
	 				{
	 					printf("Invalid token");
	 					exit(0);
	 				}
	 				break;
	 		case 3: if(current=='0')
	 					state=1;
	 				else if(current=='1')
	 					state=4;
	 				else
	 				{
	 					printf("Invalid token");
	 					exit(0);
	 				}
					break;
 			case 4: if(current=='0')
						state=1;
	 				else if(current=='1')
	 					state=4;
	 				else
	 				{
	 					printf("Invalid token");
	 					exit(0);
					}
	 				break;
		}
	}
	if(state==2)
		printf("\n\nString is accepted\n\n");
	else if(state==4)
		printf("\n\nString is accepted\n\n");
	else
		printf("\n\nString is not accepted\n\n");
}
