#include<stdio.h>
int main(void)
{
  int num = 10;
  int *p = &num;
 
  printf("before num = %d\n", num);
  printf("address of num = %p\n", (void *)&num);  
 
  *p = *p + 5;

  printf("after num = %d\n", num);
  printf("address of *p = %p\n",(void *)p); 

 return 0;
}
