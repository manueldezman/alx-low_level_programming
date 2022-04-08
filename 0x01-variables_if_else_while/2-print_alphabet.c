#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(0)
*/
int main(void)
{
	char alph[26]={ 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int i = 0;
	
	while (i < 26)
	{
		putchar(alph[i]);
		i++;
	}
	return (0);
}
