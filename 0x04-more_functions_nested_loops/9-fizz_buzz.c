#include <stdio.h>

/**
 * main- prints the numbers from 1 to 100,
 *	followed by a new line. But for multiples
 *	of three print Fizz instead of the number
 *	and for the multiples of five print Buzz.
 *	For numbers which are multiples of both
 *	three and five print FizzBuzz.
 *
 * Returns: nothing
 */
void main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((num % 5 == 0) && (num % 3 != 0))
		{
			printf("Buzz");
		}
		else if (num % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}

		printf(" ");
		num++;
	}
	printf("\n");
}
