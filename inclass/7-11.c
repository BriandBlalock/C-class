#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void getInfo(){

	char first[20];
	char last[20];
	char prefix[5];
	
	printf("Enter first name\n");
	scanf("%s",first);
	
	printf("Enter Last name\n"); 
	scanf("%s",last);
	
	printf("Enter Prefix\n"); 
	scanf("%s", prefix);
	
	char fullname[100];
	
	strcat(fullname, prefix);
	strcat(fullname, ":");
	strcat(fullname, first);
	strcat(fullname, " ");
	strcat(fullname, last);
	
	
	printf(" %s " , prefix);
	
	
}


struct employee{
	
	char[100] name; 
	int id; 
	float salary;
	
};
int main(){
	
	//getInfo();
	
	struct employee E1;
	struct employee E2;
	struct employee E3;
	
}