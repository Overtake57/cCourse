#include <stdio.h>

int main()
{
	int pizzasToEat = 100;
	printf("pizzasToEat: %i\n", pizzasToEat);
	pizzasToEat += 100;
	printf("pizzasToEat: %i\n", pizzasToEat);
	pizzasToEat -= 100;
	pizzasToEat *= 2;
	pizzasToEat /= 4;
	pizzasToEat %= 5;
	printf("pizzasToEat; %i\n", pizzasToEat);
	return 0;
}
