#include <stdio.h>
main()
{
  float b, h, area, x,y,z, perimeter;

  printf("Enter base and hight of a triangle\n");
  scanf("%f %f", &b,&h);

  area = .05*b*h;
  printf("Area of the triangle = %.2f\n", area);

  printf("Enter sides of a triangle\n");
  scanf("%f %f %f", &x, &y, &z);

  perimeter= x+y+z;
  printf("Perimeter of a triangle : %.2f\n", perimeter);

  if(area>perimeter)
    printf("Area is greater than the perimeter\n");
  else
    printf("Area is not greater than the perimeter\n");
}
