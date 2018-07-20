#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Box{
	
	char name[80];
	int length; 
	int width; 
	int height; 
	int area; 
	int perimeter;

};


void computeBox(struct Box* in);

void printBox( struct Box in);


int main(){
	
	struct Box R1 = {"Rec1", 10, 3, 4, 0, 0 };
	struct Box R2 = {"Rec2", 15, 2, 5, 0, 0 };
	computeBox(&R1);
	computeBox(&R2);
	printBox(R1);
	printBox(R2);
	
}

void computeBox(struct Box* in){
	
		in->area = 2 * ( (in->length *in->width) + (in->length * in->height) + (in->width* in->height));
		in->perimeter = 2*( in->length + in->width + in->height);
}

void printBox(struct Box in ){
	
	printf( "Box name: %s\nLength: %d\nWidth: %d \nHeight: %d \nArea: %d \nPerimeter: %d\n", in.name, in.length, in.width, in.height, in.area, in.width);
	
}