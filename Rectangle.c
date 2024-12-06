#include <stdio.h>
int main(){
    int length, breadth, area, perimeter;
    printf("Enter the value of length.\n");
    scanf("%d", &length);
    printf("Enter the value of breadth.\n");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area is %d\n",area);
    perimeter = 2*(length + breadth);
    printf("The perimeter is %d\n",perimeter);
    return(0);
}
