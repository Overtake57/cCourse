#include <stdio.h>

int main()
{
	char ASCII;
	printf("PLease enter a character: ");
	scanf("%c", &ASCII);
	printf("%i\n", ASCII);
	
	int integer;
	printf("Please enter an integer between 0 - 127: ");
	scanf("%i", &integer);
	printf("%c\n", integer);
	
	//Math with ASCII
	char mathz = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%d)\n" , mathz, mathz);

	return 0;
}

