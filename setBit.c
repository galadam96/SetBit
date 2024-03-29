#include <stdio.h>

//Date:2024.03.29
//Goal is to write a program, that turns on the selected bit from Least Significant Bit (LSB) - from right
//And print the result to the console
int main() {
	int input = 0;
	int n = 0;
	int result = 0;
	int nBin = 0;
	printf("Enter a number:");
	scanf_s("%i", &input);
	printf("\nEnter nth bit to check and set(0-31):");
	scanf_s("%i", &n);
	if (n == 0) {
		nBin = 1;
	}
	else {
		nBin = n * 2;
	}

	result = input | nBin;
	printf("\nBit set successfully");
	printf("\nNumber before setting %i bit: %i (in decimal)", n, input);
	printf("\nNumber after setting %i bit: %i (in decimal)", n, result);

	return 0;
}
