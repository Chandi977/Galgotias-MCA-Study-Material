// C Code to convert Decimal number into Binary 

#include <stdio.h> 

// Driver program to test above function 
int main() 
{ 
	int n;  
    printf("Enter the number in decimal : "); 
    scanf("%d", &n); 

    int binaryNum[32]; 

	// counter for binary array 
	int i = 0; 
	while (n > 0) { 
		// storing remainder in binary array 
		binaryNum[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 

	// printing binary array in reverse order 
	for (int j = i - 1; j >= 0; j--) 
		printf("%d", binaryNum[j]);

	return 0; 
}
