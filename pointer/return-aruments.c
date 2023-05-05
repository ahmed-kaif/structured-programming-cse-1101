#include <stdio.h>

double calculateAreaAndPerimeter(double w, double h, double * peri)
{
  double area = w * h;
  
  *peri = 2*(w+h);
  
  return area;
}

int main()
{
  double w, h, perimeter;
  printf("Enter Width and Height: ");
  scanf("%lf %lf", &w, &h);
  double area = calculateAreaAndPerimeter(w, h, &perimeter);
  printf("Area: %lf, \nPerimeter: %lf\n", area, perimeter);

}

// Here the function returns both area and perimeter
// the &perimeter returns a pointer to the function and it changes the value inside the
// function.


