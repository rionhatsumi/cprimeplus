/* nogood.c -- 含有错误的程序 */
#include <stdio.h>
int mainc(void)
{
    int n, n2, n3;
    /* 该程序含有几个错误 */

    n = 5;
    n2 = n * n;
    n3 = n * n2;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}