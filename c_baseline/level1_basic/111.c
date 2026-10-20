#include<stdio.h>
int main(void)
{
  int num = 10;
  int *p=&num;

  printf("before num = %d\n", num);

  *p = 25;
  printf("after num = %d\n", num);
 
  return 0;
}
