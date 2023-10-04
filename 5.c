#include <stdio.h>
#include <math.h>

int main (void)
{
    int C;
    float R, S;
    scanf("%d", &C);
    R=C/(2*3.14);
    S=3.14*R*R;
    printf("%lf", (double)S);
    return 0;
}