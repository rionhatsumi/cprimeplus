#include<stdio.h>
#include<string.h>
#define ANSWER "Grant"
#define MAX 40
int main()
{
    char try[40];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    while (strcmp(try, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        gets(try);
    }
    puts("That's right!");

    return 0;
}
