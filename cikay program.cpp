// Program of height, id no ,bank balance and weight
/*
Name:Collins Kiprotich
Regestration no:PA106/G/28814/25
Description:Program for my height,id number, bank balance and weight
*/
#include <stdio.h>//Preproccesor directive : scanf(),printf()

//main function
int main(){
	int height;
	int long long  Id_number;
	int bank_balance;
	int long long weight;
	
	printf("Enter your height:");
	scanf("%d",&height);
	printf("Your height is %d\n",height);
	
	printf("Enter your id number:");
	scanf("%lld",Id_number);
	printf("Your Id_number is %lld\n",Id_number);
	
	printf("Enter your bank balance:");
	scanf("%d",bank_balance);
	printf("Your bank_balance is %d\n",bank_balance);
	
	printf("Enter your weight:");
	scanf("%lld",weight);
	printf("Your weight is %lld\n",weight);
	
	return 0;
}