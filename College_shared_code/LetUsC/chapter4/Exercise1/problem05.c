/*
In the digital world colors are specified in Red-Green-Blue (RBG) format,
with values of R, G, B varying on an integer scale from 0 to 255. In 
print publishing the colors are mentioned Cyan-Magenta-Yellow-
Black (CMYK) format , with values of C, M, Y, and K varying on a real 
scale from 0.0 to 1.0 . Write a program that converts RGB color to
CMYK color as per the following formalae: ...
    ...
*/
#include <stdio.h>

int main(void)
{
    int r, g, b;
    float c, m, y, k, w, r1, g1, b1;

    printf("Enter the RGB values : \n");
    scanf("%d %d %d", &r, &g, &b);

    r1 = (float)r / 255;
    g1 = (float)g / 255;
    b1 = (float)b / 255;
    
    if (r1 > g1)
    {
        if (r1 > b1)
        {
            w = r1;
        }
        else
        {
            w = b1;
        }
    }
    else
    {
        if (g1 > b1)
        {
            w = g1;
        }
        else
        {
            w = b1;
        }
    }

    c = (w - r1) / w;
    m = (w - g1) / w;
    y = (w - b1) / w;
    k = 1 - w;
    
    printf("The RGB colors in CMYK values are : \n");
    printf("The Cyan value is : %f.\n", c);
    printf("The Magenta value is : %f.\n", m);
    printf("The Yellow value is : %f.\n", y);
    printf("The Black value is : %f.\n", k);

    return 0;
}
