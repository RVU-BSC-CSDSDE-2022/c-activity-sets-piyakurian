#include<stdio.h>
#include<math.h>
int main()
{
  float pi=3.14;
  int height,length,stomach_radius,weight;
  printf("enter the height of the camel");
  scanf("%d",&height);
  printf("enter the length of the camel");
  scanf("%d",&length);
  printf("enter the stomach radius");
  scanf("%d",&stomach_radius);
  weight= pi*pow(stomach_radius,3)*(sqrt(height*length));
  printf("the weight of the camel is: %f",weight);
  return 0;
    }