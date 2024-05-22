#include <stdio.h>
#include <math.h> //sqrt

int main()
{
    double a;
    double b;

    printf("This app will calculate the hupotenuse of a right triangle. \n");
    
    //Get the first number
    printf("Enter the first value: ");
    //lf = double format character
    scanf("%lf", &a);

    //Get the second number
    printf("Now enter the second value: ");
    scanf("%lf", &b);

    //calculate the hypotenuse
    double c = sqrt((a * a) + (b * b));

    //output the hypotenuse
    printf("The hypotenuse is %f\n", c);

    return 0;
}