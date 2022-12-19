#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
 
 void swap_int(int *a, int *b)
 {
     int temp = *a;
     *a = *b;
     *b = temp;
 }
int main() {
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
