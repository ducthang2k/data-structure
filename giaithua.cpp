#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, GiaiThua=1, n;
    printf("Nhap n! = ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        GiaiThua = GiaiThua*i;
    }
    printf("Giai thua cua %d la: %d",n,GiaiThua);

    return 0;
}
