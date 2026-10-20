#include <stdio.h>

int main(void)
{
    unsigned int number = 4294967295;

    printf("before=%u\n", number);

    number = number + 1;

    printf("after=%u\n", number);

    return 0;
}

