#include<stdio.h>

void print_array(int arr[], int size);
int sum_array(int arr[], int size);
int max_array(int arr[],int size);
int count_greater_than(int arr[], int size, int threshold);

int main(void)
{
  int data[5] = {15, 89, 29, 798, 78};
  
  printf("array:\n");
  print_array(data, 5);

  int sum = sum_array(data, 5);
  printf("sum = %d\n", sum);

  int max = max_array(data, 5);
  printf("max = %d\n", max);
  
  int count = count_greater_than(data, 5, 50);
  printf("greater than 50 = %d\n", count);

  return 0;
}

void print_array(int arr[],int size)
{
  int i;
  for(i = 0; i < size; i++)
   {
     printf("%d\n",arr[i]);
   }
}

int sum_array(int arr[],int size)
{
  int sum = 0;
  int i;
  for(i = 0; i < size; i++)
  {
    sum = sum + arr[i];
  }
 return sum;
}

int max_array(int arr[],int size)
{
  int max = arr[0];
  int i;
  for(i = 1; i < size; i++)
  {
   if(arr[i] > max)
    {
      max = arr[i];
    }
  } 
 return max;
}

int count_greater_than(int arr[], int size, int threshold)
{
  int i;
  int count = 0;
  
  for(i = 0; i < size; i++)
  {
    if(arr[i] > threshold)
      {
        count++;
      }
  }
return count;
}
  
