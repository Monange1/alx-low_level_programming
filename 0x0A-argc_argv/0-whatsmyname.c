#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	while (argc--)
	{		printf("%s\n", *argv++);
	}
	return (0);
}
