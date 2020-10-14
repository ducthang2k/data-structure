#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;


int randommang(int mang[], int n, int maxx,int minn)
{
    srand((int) time(0));
    for(int i=0;i<n;i++)
    {
        mang[i]=minn+rand()%(maxx+1-minn);
    }
    return mang[n];
}

void xuatmang(int mang[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<mang[i]<<"  ";
    }
    cout<<"\n";
}

void soptle(int mang[], int n)
{
	dem = 0;
	for(int i = 0; i < 0; i++)
	{
		if(i%2 != 0)
			dem++;
	}
	cout << "Co " << dem << "phan tu le trong mang: " ;
	for(int i = 0; i <0; i ++)
	cout << mang[i] ;
}

void cau2()
{
	int n, i;
	cout << "Nhap vao phan tu mang: ";
	cin >> n;
	int mang[n];
	nhapmang(mang,n);
	xuatmang(mang,n);
	
}
