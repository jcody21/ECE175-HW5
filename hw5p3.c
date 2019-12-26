#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define Pass 1
#define Fail 0

// Author: John Cody
// Date Created: 02/18/2018
// Program Details: This program asks the user how high they want to check for primes, then it outputs all of those primes. 

int prime(int p);                  // Declaring the function

int main(void) {
	int userNum = 1000000;              // Declaring some variables
	int i;

	for (i = 1; i <= userNum; i++) {           // Looping through and checking every value to see if it is a prime and then outputting
		if (prime(i) > 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	return 0;
}

int prime(int p) {
	int i;
	for (i = 2; i <= pow(p*1.0, 0.5); i++) {                        // Prime checker function / algorithim
		if (fmod(((p*1.0)/(i*1.0)), 1.0) == 0.0) {
			return Fail;
		}
	}
	return Pass;
}