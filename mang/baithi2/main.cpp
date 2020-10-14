#include <iostream>

using namespace std;

int sophantu()
{
    int n;
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    return n;
}

void nhapmang(float mang[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap phan tu thu "<<(i+1)<<": ";
        cin>>mang[i];
    }
}

void xuatmang(float mang[],int n)
{
    cout<<"mang: ";
    for(int i=0;i<n;i++)
    {
        cout<<mang[i]<<"  ";
    }
    cout<<"\n";
}

int main()
{
    int n=sophantu();
    float mang[50];

    nhapmang(mang,n);

    xuatmang(mang,n);

    float minn,maxx;
    minn=maxx=mang[0];
    for(int i=1;i<n;i++)
    {
        if(minn>mang[i])
            minn=mang[i];
        if(maxx<mang[i])
            maxx=mang[i];
    }
    int a,b;
    a=minn;
    b=maxx;
    if(maxx>b)
        b=b+1;
    cout<<"doan so nguyen chua tat ca phan tu trong mang la: ["<<a<<", "<<b<<"]";
    return 0;
}
