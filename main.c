#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
	{
		srand(time(NULL));
		int secret = rand() % 100 + 1;
		int guess = 0;
		printf("Welcome to Number Guessing, Where you have 10 tries to guess a number!\n");
		printf("I'm thinking of a number between 1 and 100!\n\n");
		for (int i = 1; i < 11; i++)
		{
			printf("Guess %d/10 : What's Your guess? >> ", i);
			scanf("%d", &guess);

			if (guess == secret)
			{
				printf("Correct!\n");
				return 0;
			}
			else if (guess < secret)
			{
				printf("The number was higher!\n");
			}
			else if (guess > secret)
			{
				printf("the number was lower\n");
			}
		}
		printf("\nSorry, try again, The number was %d!\n", secret);
		return 0;
	}
