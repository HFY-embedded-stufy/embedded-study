#include <stdio.h>

int global_count = 100;
void show_value(int value);

int main(void)
{
  int local_count= 5;

  printf("main global_count=%d\n",global_count);
  printf("main local_count=%d\n",local_count);

  show_value(20);

  return 0;
}

void show_value(int value)
{
  int function_num = 15;
  
  printf("parameter value = %d\n",value);
  printf("function_num = %d\n",function_num);
  printf("show_value global_count = %d\n",global_count);

}
