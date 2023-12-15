#include <stdio.h>

#define MAX 5

int main(void)
{
	char phrase[15] = "hello, world";

	for (int i = 0; i < MAX; i++)
	{
		printf("%s\n", phrase);
	}

	return 0;
}