#include<stdio.h>
void print_array(int arr[], int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    printf("%d\n", arr[i]);
    
  }
}

int main (void)
{
  int data[5] = {15,89,29,798,78};
  print_array(data, 5);

  return 0;
} 
