#include <stdio.h>

int main(void)
{
    int age = 23;
    char grade = 'A';
    float voltage = 3.3f;
    double pi = 3.1415926;

    printf("age = %d\n", age);
    printf("grade = %c\n", grade);
    printf("voltage = %f\n", voltage);
    printf("pi = %f\n", pi);

    printf("sizeof int = %zu\n", sizeof(int));
    printf("sizeof char = %zu\n", sizeof(char));
    printf("sizeof float = %zu\n", sizeof(float));
    printf("sizeof double = %zu\n", sizeof(double));

    return 0;
}

