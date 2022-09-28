#include <stdio.h>
int input()
{
  int a;
  printf("Enter two numbers");
  scanf("%d",&a);
  return a;
  }
int comapre(int a,int b, int c)
{
if (a>b && a>c)
   return a;
  else if(b>a && b>c)
   return b;
  else 
   return c;
  }
int main()
{
  int e,f,g;
  e = input();
  f = input();
  g = input();
  largest = compare(e,f,g);
  printf("the largest of %d,%d is %d\n",e,f,g);
  return 0;
}

