#include <stdio.h>
int main(){
    float length, area, perimeter;
    printf("Enter the values of length.\n");
    scanf("%f",&length);
    area = length * length;
    printf("The area is %f.\n",area);
    perimeter = 4 * length;
    printf("The perimeter is %f.\n",perimeter);
    return(0);
}
