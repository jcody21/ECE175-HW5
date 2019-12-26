#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// Author: John Cody
// Date Created: 02/18/2018
// Program Description: This program gets input from the user about how much they want to withdraw, and then it outputs the bills. 

void bills(int withdrawl);

int main(void) {
	
	int withdrawl = 1;         // Setting up the variable

	while (fmod(withdrawl / 10.0, 1.0) > 0.0) {      // Getting the user to give an input that is divisble by ten
		printf("Enter the withdrawal amount(must be multiple of $10): ");
		scanf(" %d", &withdrawl);

		if (fmod(withdrawl / 10.0, 1.0) > 0.0) {
			printf("\nThe amount you entered is not a multiple of $10\n");
		}
	}

	bills(withdrawl);                // Calling the bills function which does the bulk of the work

	return 0;
}

void bills(int withdrawl) {
	
	int fiftyBill = 0, twentyBill = 0, tenBill = 0;      // Setting up the bill variables
	
	fiftyBill = withdrawl / 50;                      // Sets each bill amount individually, and reduces the withdrawl amount accordingly
	withdrawl = withdrawl - (50 * fiftyBill);
	twentyBill = withdrawl / 20;
	withdrawl = withdrawl - (20 * twentyBill);
	tenBill = withdrawl / 10;
	
	printf("Your dispensed bills are: \n");         // Outputs the bills in a visually pleasing format
	if (fiftyBill != 0) {
		printf("\t$50: %d \n", fiftyBill);
	}
	if (twentyBill != 0) {
		printf("\t$20: %d \n", twentyBill);
	}
	if (tenBill != 0) {
		printf("\t$10: %d \n", tenBill);
	}

	return;
}