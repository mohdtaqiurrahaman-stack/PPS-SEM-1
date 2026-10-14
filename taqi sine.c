#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, m, sign = 1;
    float xdeg, s = 0, xrad, p, f;

    printf("Enter no. of steps: ");
    scanf("%d", &n);

    printf("Enter angle value: ");
    scanf("%f", &xdeg);

    xrad = xdeg * 3.14 / 180;

    for (i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {
            f = f * j;
        }

        p = sign * pow(xrad, m);
        s = s + (p / f);
        sign = (-1)*sign;
        m=m+2;
    }
printf("value =%f",s)
}
