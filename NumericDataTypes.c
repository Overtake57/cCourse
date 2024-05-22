#include <stdio.h>

int main()
{
	printf("How many dogs do you have?: ");	
	double dogs;
	
	scanf("%f", &dogs);
	
	printf("%f\n%e\n%g\n", dogs, dogs, dogs);        
	
	/*COnversion Characters
	_______________________
	
	%f - Decimal notation
	%e - Scientific notation
	%g - Computer decides
		< -4
		>  5
	*/

	return 0;
}

