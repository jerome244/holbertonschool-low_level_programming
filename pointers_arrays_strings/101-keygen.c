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

	srand(time(NULL));
	for(int i = 0; i < password_length; i++)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
	}
	printf("\n");
	return (0);
}
