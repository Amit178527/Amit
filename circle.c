#include <stdio.h>
int main() {
    float radius, area, perimeter;
    const float PI = 3.14;
    printf("Enter the value of radius\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("The area of the circle is: %f\n", area);
    perimeter = 2 * PI * radius;
    printf("The perimeter of the circle is: %f\n",perimeter);
    return 0;
}
