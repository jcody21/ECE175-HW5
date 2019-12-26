#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//  Author: John Cody
//  Date created: 02/18/2018
//  Program Description: This program predicts the population of Gotham city in the year that the user enters. 

double population(int year);                   // Declaring the function for later usage

int main(void) {
	int year = 0;                              // Declaring the variable

	printf("Please enter a year after 1990: ");       // Prompting the user for input
	scanf(" %d", &year);

	while (year < 1990) {                      // Ensuring that the input is usable
		printf("\nYear is too low.\n");
		printf("\nEnter a year after 1990: ");
		scanf(" %d", &year);
	}

	printf("\nPredicted Gotham City population for %d (in thousands) : %.3lf\n", year, population(year));    // Output

	return 0;
}

double population(int year) {
	year -= 1990;                     // Getting the "x" value 
	return (52.966 + 2.184*year);     // Plugging that value into to function to get the population and returning it. 
}