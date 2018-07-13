#include <stdio.h>
#include <stdlib.h>


void add( float* A, float* B) ;
void subtract(float* A, float* B);
voif multiply(float* A, float* B);
void power(float* A, float* B);
void factorial(float* A); 

void getOperandA(float* A);
void getOperandB(float* B); 
void getOperator(char* C);


int main(){
	
	printf("Brian Blalocks C Calculator\n");
	
	int option = -1;
	
	float operandA = 0; 
	float operandB = 0;
	char operator; 
	
	
	while (1) {
		do{
		printf("Select Option:\n1. Insert two operands (A and B) and an operator\n2. Use the previous result as operand A, insert operand (B) and an operator.\n0. Exit");
		scanf('%d', &option);
		} while( option != 1 && option != 2 && option != 0);
		
		if(option == 0){
			
			break;
		}
			
		
		if( option == 1){
			getOperandA( &operandA);
		}
		getOperator(&operator);
		getOperandB(&operandB);
		
		
		switch(operator){
			
			case '+':
				add(&operandA, &operandB);
				break; 
			case '-':
				subtract(&operandA, &operandB);
				break;
			case 'x':
				multiply(&operandA, &operandB);
				break; 
				
			case 'P':
				power(&operandA, &operandB);
				break;
			case '!':
				factorial(&operandA, &operandB)
				break;
				
			default:
			
				break;
			
		}
		
		printf("Result = %d", operandA);
		
	}
	
	printf("Goodbye");
	
	return 0;
}

void getOperandA(float* A){
	
	printf("Insert operand A:\n");
	
	scanf("%f", A);
	
}
void getOperandB(float* B){
	
	printf("Insert operand B:\n");
	
	scanf("%f", B);
	
}
void getOperator(char* operator){
	
	int needOperator = 1;
	while( needOperator){
		printf( "Insert Operator(+,-,x,P,!): \n");
		
		scanf("%c", operator);
		
		if( *operator == '+' || *operator == '-' || *operator == 'x' || *operator == 'P' ||*operator == '!'){
			
			needOperator = 0;
		}
		else{
			
			printf("Operator not supported");
		}
			
	}
	
}

void add(float* A, float* B){
	
	*A = *A + *B;
	
}
void subtract(float* A, float* B){
	
	*A = *A - *B;
	
}
void multiply( float* A, float* B){
	
	*A = *A * *B;
	
}
void power(float* A, float* B){
	
	if( *A < 0 || *B < 0){
		
		printf("Negative operands not supported for this operator);
		return -1;
		
	}
	if ( *B == 0) 			// base case, exponent is 0 so result is 1
		*A = 1;
	else if( *B == 1){		// base case, exponent is 1, result is done 
		return;
	}else {				 	//recursive case 
		*A = *A * *A; 		// multiply
		*--B;				//decrement the value of b (-- takes precedent over *)
		power(A,B );			// then pass new val into power again
		
	}
		
}

void factorial(float* A){
	
	if( *A < 0 ){
		
		printf("Negative operands not supported for this operator);
		return -1;
		
	}
	current = *A;
	
	if( current == 0)
		return; 
	else if ( current == 1){
		
		*A = 1
	}
	else {
		*--A;
		factorial( A);
		*A = current * *A;
		
	}
	
		
}
