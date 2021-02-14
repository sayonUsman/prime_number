#include <stdio.h>

int find_prime(int);

int main(int argc, char *argv[])
{
	int number;

	int determinant;

	printf("Please enter the number:\n");

	scanf("%d", &number);

	if (number == 1)

		printf("%d is not a prime number.\n", number);
	else
	{
		determinant = find_prime(number);

		if (determinant == number - 1)

			printf("%d is a prime number.\n", number);

		else

			printf("%d is not a prime number.\n", number);
	}

	return 0;
}

int find_prime(int number)
{
	int index = 0;

	for (index = 2; index < number; index++)
	{
		if (number % index == 0)

			return index;

		else if (index == number - 1)

			return index;
	}
}