#include <stdio.h>
#define MAX 20
int main()
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("Enter your first name: ");
    gets(first);
    puts("Enter your last name: ");
    gets(last);
    puts("Enter your prize money: ");
    scanf("%1f", &prize);
    sprintf(formal, "%s, %-19s: %6.2f\n", last, first, prize);
    puts(formal);

    return 0;
}
