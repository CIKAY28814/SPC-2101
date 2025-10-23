/*
Name;Kiprotich Collins
Reg no:PA106/G/28814/25
Description;program  converting from degress to fohrenheit
*/

#include <stdio.h>//preprocessor directive

float convertTocelcius(float fohrenheit){
	return(fohrenheit-32)*5/9;
}

int main(){
	float fohrenheit,celcius;
	
	printf("Enter temperature in fohreinheit:");
	scanf("%f",&fohrenheit);
	
	
	celcius=convertTocelcius(fohrenheit);
	printf("Tmperature in celcius:%2fC\n",celcius);
	
	return 0;
}