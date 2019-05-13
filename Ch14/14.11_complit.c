#include <stdio.h>
#define MAXTUTL 41
#define MAXAUTL 31

struct book
{
    char title[MAXTUTL];
    char author[MAXAUTL];
    float value;
};

int main()
{
    struct book readfirst;
    int score;
    printf("Enter test scores; ");
    scanf("%d", &score);

    if (score > 84)
        readfirst = (struct book)
    {
        "Crime and Punishment",
        "Fyodor Dostoyevsky",
        9.99
    };
    else
        readfirst = (struct book)
    {
        "Mr. Bouncy's Nice Hat",
        "Fred WinSOme",
        5.99
    };
    printf("Your assigned reading:\n");
    printf("%s by %s: $%.2f\n", readfirst.title, readfirst.author, readfirst.value);
    return 0;
}
