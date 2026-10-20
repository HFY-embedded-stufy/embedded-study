#include<stdio.h>
int main(void)
{
  int num = 50;
  int *p = &num;

  printf("num = %d\n",num);
  printf("address of num = %p\n", (void *)&num);
  printf("p = %p\n", (void *)p);
  printf("*p = %d\n",*p);
  
  return 0;
}
