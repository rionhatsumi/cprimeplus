#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main (void)
{
    double distk, distm;
    double rate;
    int min, sec;
    int time;
    double mtime;
    int mmin, msec;
    printf ("This program converts your time for a metric race \n");
    printf ("to a time for running a mile and to your average \n");
    printf ("speed in miles per hour.\n");
    printf ("Please enter,in kilometers,the distance run \n");
    scanf ("%lf", &distk);
    printf ("Next enter the time in minutes and seconds \n");
    printf ("Begin by entering the minutes \n");
    scanf ("%d", &min);
    printf ("now enter the seconds \n");
    scanf (" %d", &sec);
    time = S_PER_M * min + sec;
    distm = M_PER_K * distk;
    rate = distm / time * S_PER_H;
    mtime = (double)time / distm;
    mmin = (int)mtime / S_PER_M;
    msec = (int) mtime % S_PER_M;
    printf ("you ran %1.2f km(%1.2f miles)in %d min,%d sec\n", distk, distm, min, sec);
    printf ("%d sec.\nYour average speed eas %1.2f mph\n", msec, rate);
    return 0;
}
