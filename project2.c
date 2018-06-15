
#include <stdlib.h>
#include <stdio.h>



void getIndexOf(int A[], int n);

void countOf(int A[] , int n );

void changeElement(int A[],int n);

void printArray(int A[], int n);



int main (){ 

	int A[] = {10 ,20 ,24, 12, 32, 45, 40, 20 ,40 ,40};
	int length = 10;
	
	int running = 1; 
	
	int choice = 0;
	while (running){
		
		
		do {
			
		printf("Choose Option:\n0. Get Index of Value\n1.Count Occurrences of Value\n2.Change Element at Index\n3.View Array\n");
		scanf("%d", &choice);
		}while( !( choice >=0 && choice <=3));
		
		switch(choice){
			
			case 0 : 
				getIndexOf(A, length);
				break;
			case 1 : 
				countOf(A, length);
				break;
			case 2 : 
				changeElement(A, length);
				break;
			case 3 : 
				printArray(A, length);
				break;
		
		}
		do{
		printf("Would you like to use the handler again? 1 for Yes 0 for no \n");
		scanf("%d", &running);
		}while(  running != 1 && running !=0  );
		
	}

}


void getIndexOf(int A[], int n){
	
	int key= -1;
	
	int index = -1;
	printf("Enter key to locate:\n");
	scanf("%d", &key);
	
	for ( int i = 0 ; i < n; i ++){
		
		if( A[i] == key ){
			index = i; 
			break;
		}
		
	}
	
	printf("Value is at index %d\n" , index);
	
	
}

void countOf(int A[] , int n ){
	
	int key = 0; 
	int count = 0;
	printf("Enter key to count\n");
	scanf("%d", &key);
	
	for ( int i = 0 ; i < n; i ++){
		
		if(A[i] == key)
			++count;
	}	
	
	printf("Key occurs %d times\n", count);
	
}

void changeElement(int A[],int n){
	
	int value=0; 
	int index = 0;
	
	
	printf("Enter index to change\n");
	scanf("%d", &index);
	printf("Enter value to change to\n");
	scanf("%d", &value);

	for ( int i = 0; i < n; i ++){
		
		if(i == index){
			A[i] = value;
			printf("Updated\n");
			break;
		}
	}1
	
}

 void printArray(int A[], int n){
	
	printf("{");
	for ( int i = 0 ; i < n; i ++){
		
	printf(" %d, ", A[i]);
		
	}
	printf("}\n");
}















