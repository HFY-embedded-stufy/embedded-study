#include <stdio.h>
int add (int a, int b)
{
  int sum;
  sum = a+b;
  return sum;
}

int main(void)
{
  int result;
  
  result = add(10, 5);
  printf("result = %d\n",result);
  return 0;  
}
