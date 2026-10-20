#include <stdio.h>

void change(int x)
{
  x=100;
  printf("inside change x = %d\n", x);
}

int main(void)
{
  int num = 10;
  printf("before change num = %d\n",num);
  
  change(num);
  printf("after change num = %d\n",num);
 
  return 0;
}
