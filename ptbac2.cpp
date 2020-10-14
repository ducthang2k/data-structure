#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, delta, x1, x2;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    if(a==0)
    {
       if (b==0)
		{
			if (c==0) printf("Phuong trinh vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		}
		else
		{
			x1=-b/c;
			printf("Phuong trinh co 1 nghiem: %1.2f",x1);
		}
    }

    else
    {
        delta = b*b - 4*a*c;

        if(delta<0)
        {
            printf("Phuong trinh vo nghiem");
        }

        if(delta==0)
        {
            x1 = x2 = -b/(2*a);
			printf("Phuong trinh co nghiem kep: x1 = x2 = %1.2f",x1,x2);
        }

        if(delta>0)
        {
            x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet:\n");
			printf("x1 = %1.2f\n",x1);
			printf("x2 = %1.2f",x2);
        }
    }

    return 0;
}
