#include<stdio.h>
#include<conio.h>
#include<time.h>
int main()
{
	int number,guess,attempts=0;
	srand(time(0));
	number=rand()%1000+1;
	printf("Gaurab khadka\n");
	printf("Guess the number between 1 and 1000:\n");
	do
	{
		printf("Enter your guess number: ");
		scanf("%d",&guess);
		attempts++;
		if(guess>number)
		{
			printf("Your guess is too high! Try again.\n");
		}
		else if(guess<number)
		{
			printf("Your guess is too low! Try again.\n");
		}
		else
		{
			printf("Congratulation! you guessed the number correctly.\n");
			printf("you guessed it on %d attempt\n",attempts);
		}
	}
	while (guess !=number);
	return 0;
}
