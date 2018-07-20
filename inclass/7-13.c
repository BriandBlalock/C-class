#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct book{
	char title[50];
	char author[50];
	int book_id;
	
};

int countChar(char str[], char ch){
	
	int count = 0;
	inr len = strlen(str);
	for( int i = 0 ; i < len; i ++){
		
		if( str[i] == ch)
			++count;
		
		
	}
	
	return count;
}

int main (){ 

	int counter = countChar( "Hello world", 'l');
	
	struct book B1;
	
}