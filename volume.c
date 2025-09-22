
// Name: Bright Matasio
// Reg No: PA106/G/28751/25
// Description: My programming work to prompt the user to enter radius and height and compute the volume and surface area of a cylinder

#include <stdio.h>
#define PI 3.142

int main()
{
    double radius, height;
    double volume, surfaceArea;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    printf("Enter height: ");
    scanf("%lf", &height);

    volume = PI * radius * radius * height;
    surfaceArea = (2 * PI * radius * radius) + (2 * PI * radius * height);

    printf("The surface area is: %.2f\n", surfaceArea);
    printf("The volume is: %.2f\n", volume);

    return 0;
}
