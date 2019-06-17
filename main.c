#include <stdlib.h>

int main(void) 
{
	int i = 0;

	while (1)
	{
		i++;
		calloc(i, sizeof(long long));
	}
	return 0;
}