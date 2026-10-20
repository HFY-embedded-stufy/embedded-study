#include<stdio.h>
int main(void)
{
  int value = 100;
  int *p = &value;
  
  printf("value = %d\n",value);
  printf("address of value = %p\n", (void *)&value);
  printf("address of p = %p\n",(void *)p);
  
  *p = 200;
  
  printf("after value = %d\n", *p);

  return 0;
}
