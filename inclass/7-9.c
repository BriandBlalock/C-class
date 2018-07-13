#include <stdio.h>
#include <stdlib.h>

void Swap(char* a, char* b);

main (){

	char ch1 ='a';
	char ch2 = 'b'; 
	
	
	Swap(&ch1, &ch2);

}
	
void Swap(char* a, char* b){

	char temp = *a;
	*a = *b; 
	*b = temp;

}