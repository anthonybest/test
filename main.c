#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
	printf("Hello world\n");

#error This should not compile!

	return EXIT_SUCCESS;
}
