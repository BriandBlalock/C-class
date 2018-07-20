#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// this won't compile, this is just a space to work on inclass problems. missing a bunch of structures

struct Student{
	
	char name[60];
	int ID; 
	floatGPA;
	
};

int countStudent(strict Students S[], int M ){
	
	int counter = 0; 
	char name[] = "John";
	
	for (int i = 0 ; i < M; i ++){
		
		if( strcmp(S[i].name, name) == 0)
			++counter;
		
	}
	
}

bool CheckSE_P(struct Line record){
	
	if( (record.start.X ==0 && record.start.Y == 0) || (record.end.X == 0 && record.end.Y == 0) )
		
		return True;
		
		
	return False;
	
}
void initializeLines(struct Line lines[], int size){
	
	struct Point p = {0,0};
	
	for ( int i  = 0 ; i < size; i ++){
		
		lines[i].start = p;
		lines[i].end = p;
		
	}
	
}

bool checkStudent( struct Student R) {
	
	if( R.DateOfBirth.year >=1990 && R.DateOfBirth.year <= 200)
		return true; 
	
	return false;
	
}

int countStudent2(struct Students S[], int M, int ZC){
	
	int counter = 0;
	for ( int i = 0; i < M ; i ++) {
		
		if( S[i].home.zipcode == ZC)
			++counter;
		
		
	}
	return counter;
}
	
	
	