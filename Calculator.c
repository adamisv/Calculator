#include <stdio.h>

int main(void) {
	int a, b;
	int choice;
	char repeat;
	
	do {
		printf("\nCalculator\n-----------------------\n");
		printf("Enter number 1: ");
		scanf("%d", &a);
		printf("Enter number 2: ");
		scanf("%d", &b);
		printf("\nYour numbers are %d and %d\n\n", a, b);
		
		printf("Choose an option for what you want to do with the numbers:\n");
		printf("1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division");
		printf("\n-----------------------\nOption: ");
		scanf("%d", &choice);
		
		switch (choice) {
		case 1:
			printf("The result of addition is: %d\n", a + b);
			break;
		case 2:
			printf("The result of subtraction is: %d\n", a - b);
			break;
		case 3:
			printf("The result of multiplication is: %d\n", a * b);
			break;
		case 4:
			if (b == 0) {
				printf("Error: Cannot divide by zero!\n");
			} else {
				printf("The result of division is: %d\n", a / b);
			}
			break;
		default:
			printf("Invalid option!\n");
			break;
		}
		
		printf("\nDo you want to continue? (y/n): ");
		scanf(" %c", &repeat); 
		
	} while (repeat == 'y' || repeat == 'Y');
	
	printf("Thank you for using the calculator. Goodbye!\n");
	return 0;
}
