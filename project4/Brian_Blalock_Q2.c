#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool isValid(char code[]);

int main(){
	
	char serialcode1[] = "89238498723498KL";
	char serialcode2[] = "97083498SL";
	
	if( isValid (serialcode1) )
		printf("serialcode 1 is valid code\n");
	else
		printf("serialcode 1 is invalid code\n");
	
	if( isValid (serialcode2) )
		printf("serialcode 2 is valid code\n");
	else
		printf("serialcode 2 is invalid code\n");
	
	
}

bool isValid(char code[]){
	
	int length = strlen(code);
	
	if(length < 8 || length > 10 )
		return false; 
	
	char front [4];
	strncpy(front, code , 3);
	front[3] = '\0';
	char last[] = {code[length-2], code[length-1], '\0'};
	
	if( strcmp(front, "970") != 0 )
		return false;
	
	if(strcmp( last , "SL") != 0 )
		return false; 
	
	
	return true;
	
	
}