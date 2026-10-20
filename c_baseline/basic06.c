#include <stdio.h>

int main(void)
{
  int unmber = 2147483647;
  printf("before=%d\n",unmber);
  unmber=unmber+1;
  printf("after=%d\n",unmber);
return 0;
}
