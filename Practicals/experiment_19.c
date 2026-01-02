#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\nLength of first string = %lu\n", strlen(str1));
    printf("Length of second string = %lu\n", strlen(str2));

    strcpy(str3, str1);
    printf("After strcpy, str3 = %s\n", str3);

    strcat(str1, str2);
    printf("After strcat, str1 = %s\n", str1);

    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    return 0;
}
