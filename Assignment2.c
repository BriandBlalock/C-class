#include <stdlib.h> 
#include <stdio.h>
#include <stdbool.h>


bool average( float a[], int n, float estAvg){
	float sum =0;
	
	for ( int i = 0; i < n ; i ++){
		
		sum += a[i];
		
	}
		
	float avg = sum / n;
	float diff = estAvg - avg;
	if ( diff >= -10 && diff <= 10)
		return true; 
	
	return false;
		
	
}

float sumSection( float a[], int n, int i , int j){
	
	int sum = 0;
	
	if (j < n){
		
		for( int k = i; k <j ; k ++){
			
			sum += a[k];
		}
		
		return sum;
		
	}
	else return -1;
	

}

int power ( int x , int y) {
	
	if( y == 0) return 1;
	
	else return x * power(x , y-1);
	
}


int main () {

	float a[] = {12.5, 4.6 , 3.1, 7.8};
	
	printf( "pwer = %d" , power(2,8) ); 
	
	
	


}

