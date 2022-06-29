#include <stdio.h>

int main(void)
{
    // int n = 50;
    // int *p = &n;
    char *s = "HI!";
    // char *p = &s[0];
    // printf("%p\n",p);
    // printf("%p\n",s);

    printf("%p\n",s);
    printf("%p\n",&s[0]);
    printf("%p\n",&s[1]);
    printf("%p\n",&s[2]);
    printf("%p\n",&s[3]);
}

