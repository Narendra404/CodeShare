/*
The Body Mass index (BMI) is defined as the ratio of the weight of a 
person (in kilograms) to the square os the height (in meters). Write
a program that receives weight and height, Calculates the BMI, and
reports the BMI category as per the following table:
    ......
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    float h, w, sq, bmi;
    printf("Enter the weight in kilograms: \n");
    scanf("%f", &w);
    printf("Enter the height in meters: \n");
    scanf("%f", &h);

    sq = pow(h , 2.0);
    bmi = w / sq;

    if ((bmi - 15.0) < 0.0)
    {
        printf("BMI category : Starvation\n");
    }
    else if (((bmi - 15.1) >= 0.0) && ((bmi - 17.5) <= 0.0))
    {
        printf("BMI category : Anorexic\n");
    }
    else if (((bmi - 17.6) >= 0.0) && ((bmi - 18.5) <= 0.0))
    {
        printf("BMI category : Anorexic\n");
    }
    else if (((bmi - 18.6) >= 0.0) && ((bmi - 24.9) <= 0.0))
    {
        printf("BMI category : Anorexic\n");
    }
    else if (((bmi - 25.0) >= 0.0) && ((bmi - 25.9) <= 0.0))
    {
        printf("BMI category : Anorexic\n");
    }
    else if (((bmi - 30.0) >= 0.0) && ((bmi - 30.9) <= 0.0))
    {
        printf("BMI category : Anorexic\n");
    }
    else if ((bmi - 40.0) >= 0.0)
    {
        printf("BMI category : Anorexic\n");
    }
    else
    {
        printf("Your BMI might have slipped through our categories.\n We regret the inconvenience.\n Hopefully next time the author of the questions will have the foresight to think through the questions thoughtfully.\n Thank You.\n");
    }

    return 0;
}
