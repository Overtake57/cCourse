#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool pizzaIsHealthy;
    int temp;
    printf("Do you believe in the power of pizza? 1 is true and 0 is false: ");
    scanf("%d", &temp);
    pizzaIsHealthy = temp;

    if(pizzaIsHealthy) //True as long as not zero!
    {
        //Will this code run?
        printf("Welcome to my pizza APP\n");
    }
}