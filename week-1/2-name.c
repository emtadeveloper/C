#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s \n", answer);

    // or

    //  printf("hello, %s \n",  get_string("What's your name? "));
}