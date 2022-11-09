#include <stdio.h>
add(int x, int y, int *sum)
{
  *sum= x + y ;
}
int main()
{
  int x, y,sum =0;
  x=4,y=3;
  add(x,y,&sum);
  printf("%d", sum);
}