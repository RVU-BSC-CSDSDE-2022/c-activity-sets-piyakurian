#include <stdio.h>
#include <math.h>
int main()
{
  int truck_weight;
  int n,camel_weight,total_weight;
  printf("enter the weight of the truck");
  scanf("%d",&truck_weight);
  printf("enter the number of camels");
  scanf("%d",&n);
  float pi=3.14;
  int height,length,stomach_radius,weight;
  printf("enter the height of the camel");
  scanf("%d",&height);
  printf("enter the length of the camel");
  scanf("%d",&length);
  printf("enter the stomach radius");
  scanf("%d",&stomach_radius);
  weight= pi*pow(stomach_radius,3)*(sqrt(height*length));
  camel_weight=weight*n;
  printf("total weight of camels: %d \n", camel_weight);
  total_weight=camel_weight+truck_weight;
  printf("the total weight of the truck: %d",total_weight);
  return 0;

}