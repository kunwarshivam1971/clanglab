
#include <stdio.h>

int main() {
    int i = 25;
    float f = 12.34;
    double d = 123.456789;
    char c = 'A';
    char str[] = "Shivam";

    printf("Integer (int): %d\n", i);
    printf("Float (float): %f\n", f);
    printf("Double (double): %lf\n", d);
    printf("Character (char): %c\n", c);
    printf("String (char array): %s\n", str);
    printf("Float with 2 decimal places: %.2f\n", f);
    printf("Double with 3 decimal places: %.3lf\n", d);

    return 0;
}
