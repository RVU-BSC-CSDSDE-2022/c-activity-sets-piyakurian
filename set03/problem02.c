 //Write a program to find if a triangle is scalene
void input(float base, float height);
float find_area(float base , float height, float *area);
void output(float base, float height, float area);

#include<stdio.h>
float input_side();
int check_scalene(float a,float b,float c);
void output(int a, )
{
  printf("Enter the base and height\n");
  scanf("%f%f")
}
float find_area(float base, float height)
{
  float area=0.5*base*height;
  return area;
}

void output(float base,float height,float area)
{
  printf("The area of a triangle with %f as  base and %f as height is %f\n", base,height,area)
}

int
int main(void)
{
  float base, float height, float area;
  input(&base, &height);
  area = find_area(base,height);
  output(base,height,area);
  return 0;
}
