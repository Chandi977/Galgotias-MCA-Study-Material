// C program to compute sum of digits in
// number.
#include <stdio.h>

// Driver code
int main()
{
	int n ;
    printf("Enter the value of n \n");
    scanf("%d", &n);

    int sum = 0;
	while (n != 0) {
		sum = sum + n % 10;
		n = n / 10;
	}

    printf("The sum of the digits in the number is: %d\n", sum);
	return 0;
}
