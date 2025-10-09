/*
NAME;Collins Kiprotich
REG NO;PA106/G/28814/25
DESCRIPTION:PROGRAMM DISPLAYING PASSWORD ENTRY
*/
#include <stdio.h>
int main(){
	int password;
	do{ 
		printf("Enter your password:");
		scanf("%d",&password);
	}
	while(password !=1234);
	printf("Acess granted");
	return 0;
}