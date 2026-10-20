#include <stdio.h>

int main(void)
{
    int number = 10;

    printf("start = %d\n", number);

    number += 5;
    printf("after_add = %d\n", number);

    number -= 3;
    printf("after_sub = %d\n", number);

    number *= 2;
    printf("after_mul = %d\n", number);

    number++;
    printf("after_inc = %d\n", number);

    number--;
    printf("after_dec = %d\n", number);

    return 0;
}
