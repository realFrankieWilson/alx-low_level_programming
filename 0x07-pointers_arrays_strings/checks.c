#include <stdio.h>
#include <string.h>
int main(void)
{
	char c;
	c = scanf("%c", &c);
	char *s = "hello";
	int i = 0, j;

	while (s[i])
	{
		i++;
	}
	
	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;

			printf("%s", s);
		}
	}
	printf("outa loop\n");
}
