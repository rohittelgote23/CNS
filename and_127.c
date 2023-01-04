#include <stdio.h>
#include <string.h>

void main()
{
    char str[] = "Hello World";
    char str1[11], str2[11], str3[11];
    int i, len;
    len = strlen(str);

    printf("\nand with 127 : ");
    for (i = 0; i < len; i++)
    {
        str1[i] = str[i] & 127;
        printf("%c", str1[i]);
    }
    printf("\n");

    printf("or with 127 : ");
    for (i = 0; i < len; i++)
    {
        str2[i] = str[i] | 127;
        printf("%c", str2[i]);
    }
    printf("\n");

    printf("xor with 127 : ");
    for (i = 0; i < len; i++)
    {
        str2[i] = str[i] ^ 127;
        printf("%c", str3[i]);
    }
    printf("\n");
}