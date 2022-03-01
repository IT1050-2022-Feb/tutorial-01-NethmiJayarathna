/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

/* Function declarations */
int max(int num1, int num2);
int min(int num1, int num2);
int mul(int num1, int num2);


int main() 
{
    int num1, num2, maximum, minimum,multiply;
    
    /* Input two numbers from user */
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    
    maximum = max(num1, num2);  // Call maximum function
    minimum = min(num1, num2);  // Call minimum function
    multiply=mul(num1, num2);// Call minimum function
    printf("\nMaximum = %d\n", maximum);
    printf("Minimum = %d\n", minimum);
    printf("Multiply= %d",multiply);
    return 0;
}

int max(int num1, int num2)
{
	return (num1 > num2 ) ? num1 : num2;
 
}

int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
int mul(int num1, int num2)
{
  return num1*num2 ;
}