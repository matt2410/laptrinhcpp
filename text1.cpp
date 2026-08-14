#include <stdio.h>
#include <math.h>
float x[100], y[100];
float do_dai(int i, int j)
{
    return sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
}
void nhapsl(int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        printf("Nhap toa do diem thu %d: ", i + 1);
        scanf("%f%f", &x[i], &y[i]);
    }
}
void main()
{
    int n, i, j, imax, jmax;
    float d, dmax;
    printf("Nhap so diem N: ");
    scanf("%d", &n);
    nhapsl(n);
    dmax = do_dai(1, 2);
    imax = 1;
    jmax = 2;
    for (i = 1; i <= n - 1; ++i)
        for (j = i + 1; j <= n; ++j)
        {
            d = do_dai(i, j);
            if (d > dmax)
            {
                dmax = d;
                imax = i;
                jmax = j;
            }
        }
    printf("Diem xa nhat la diem thu %d va diem thu %d\n", imax, jmax);
    printf("Khoang cach giua 2 diem la: %.2f\n", dmax);
    getch();
}