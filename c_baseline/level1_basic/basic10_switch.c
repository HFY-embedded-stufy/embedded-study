#include <stdio.h>

int main (void)
{
  int state = 5;
  
  switch(state)

   {
    case 0:
      printf("System init\n");
      break;

    case 1:
      printf("System running\n");
      break;

    case 2:
      printf("System error\n");
      break;

    default:
      printf("System satte\n ");
      break;
   }
 return 0;
}
