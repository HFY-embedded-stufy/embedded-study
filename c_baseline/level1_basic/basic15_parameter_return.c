#include <stdio.h>
int square(int x)
{
  int a;
  a=x;
  printf("a=%d\n",a);
  return x*x;
}
 
void print_message(void)
{
  printf("function test\n");
}

int main(void)
{
  int result=square(4);
  printf("result=%d\n",result);

  print_message();

  return 0;
}
