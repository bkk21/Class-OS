#include <stdio.h>

int main()
{
	char buff[] = "This is a sample file.\n";
	int nb;
	int i;

	nb = 24;
	for(i = 0; i < nb; i++)
		printf("%c", buff[i]);
}
