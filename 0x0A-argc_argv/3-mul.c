#include "main.h"

int main(int argc, char **argv)
{
	char sum, s;
	if (argc == 2)
	{
		char first = (*(argv + 1));
		char sec = (*(argv + 2));
		sum = first * sec;
		s = atoi(sum);
		printf("%d\n", s);
	else
		printf("Error\n");		
}
