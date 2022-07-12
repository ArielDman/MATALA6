#pragma warning(disable:4996)
#include <stdio.h>
#include <unistd.h>


int pack4Chars2Int(char c1, char c2, char c3, char c4)
{
	int sum = 0x0;
	char c[4] = { c1,c2,c3,c4 };
	for (int i = 0; i < 4; i++)
	{
		sum = sum << 8;
		sum = sum | c[i];
	}

	return sum;
}

int checkEvenParity(short input)
{
	char mask = 0b1;
	int counter = 0;

	while (input != 0)
	{
		if (mask & input==1)
			counter++;
	}

	if (counter % 2 == 1)
		return 0;

	return 1;
}


void main()
{
	int x = pack4Chars2Int('a', 'b', 'c', 'd');
	printf("%d", x);

	short y = 5;
	if (checkEvenParity(y) == 0)
	{
		printf("\n even bits");
	}
	else
		printf("\n odd bits");
}


