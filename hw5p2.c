#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Author: John Cody
// Date Created: 02/18/2018
// Program Details: This program computes the sum of a series. 

long int power(int base, int exp);                     // Declaring the functions
long int series(int n, int j);

int main(void) {

	int base = 0, exp = 0, i = 0;                     // Initializing some variables

	printf("Enter the values of n and j : ");         // Prompting the user for input
	scanf(" %d %d", &base, &exp);                     // Scanning input into variables
	
	for (i = 1; i <= base; i++) {
		if (i < base) {
			printf("%d^%d + ", i, exp);               // Looping to display the series
		}
		else {
			printf("%d^%d", i, exp);
		}
	}

	printf(" = %d\n", series(base,exp));             // Calling the function to solve the series and outputing

	return 0;
}

long int power(int base, int exp) {       // Calculates the value of a base to a power using a for loop by multiplying the base 
	int i = 0, sum = 1;                   // by itself depending on the value of the exponent. 
	for (i = 1; i <= exp; i++) {
		sum = sum*base;
	}
	return sum;
}

long int series(int n, int j) {          // Calculates the value of series using a for loop to iterate through the base values. 
	int i = 0, sum = 0;
	for (i = 1; i <= n; i++) {
		sum = sum + power(i, j);
	}
	return sum;
}