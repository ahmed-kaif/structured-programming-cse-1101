#include<stdio.h>
void ap(float base, float height)
{
    // function to calculate the area and perimeter
    float area = base * height;
    float perimeter = 2* (base + height);

    printf("The area of the rectangle is %0.2f.\n", area);
    printf("The perimeter of the rectangle is %0.2f.\n", perimeter);
}

int main()
{
    void ap(float base, float height);

    float b, h;
    printf("Enter the base and height of the rectangle: ");
    scanf("%f %f", &b, &h);

    ap(b, h);
    
}