#include<stdio.h>
int main()
{
    char *mesg = "Don't be a fool! ";
    char *copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mwsg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
    return 0;
}
