#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h> 

/**
 * main - generate a random password
 * Return: always 0 (Success)
 */

int main(void)
{
	int password_length = 10;
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/|";
	int i = 0;

	srand(time(NULL));
	while (i < password_length)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
		i++;
	}
	printf("\n");
	return (0);
}
