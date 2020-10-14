#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>

using namespace std;

int sophantu()
{
    int n;
    cout<<"Nhap so phan tu cua mang: ";
    cin>>n;
    return n;
}

void nhapmang(int mang[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap phan tu thu "<<(i+1)<<": ";
        cin>>mang[i];
    }
}

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

void nhonhatlonnhat(int mang[],int n)
{
    int minn,maxx;
    minn=maxx=mang[0];
    for(int i=1;i<n;i++)
    {
        if(maxx<mang[i])
            maxx=mang[i];
        if(minn>mang[i])
            minn=mang[i];
    }
    cout<<"so lon nhat la: "<<maxx<<"\n";
    cout<<"so nho nhat la: "<<minn<<"\n";
}

int amdautien(int mang[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(mang[i]<0)
            return mang[i];
    }
    return 0;
}

void duongnhonhat(int mang[],int n)
{
    int mangduong[n];
    int a=0;
    for(int i=0;i<n;i++)
    {
        if(mang[i]>0)
        {
            mangduong[a]=mang[i];
            a++;
        }
    }
    if(a==0)
        cout<<"mang khong co phan tu nao duong";
    else
    {
        int mind=mangduong[0];
        int dem=0;
        for(int i=1;i<a;i++)
        {
            if(mind<mangduong[i]||mind==mangduong[i])
            {
                mind=mangduong[i];
                dem++;
            }

        }
        int vt[dem+1];
        int b=0;
        for(int i=0;i<a;i++)
        {
            if(mind==mangduong[i])
            {
                vt[b]=i;
                b++;
            }
        }
        cout<<"mang co phan tu duong nho nhat la "<<mind<<" o vi tri ";
        for(int i=0;i<b;i++)
        {
            if(i==b-1)
                cout<<vt[i];
            else cout<<vt[i]<<" ,";
        }
    }
    cout<<"\n";
}

int tongmang(int mang[],int n)
{
    int tong=0;
    for(int i=0;i<n;i++)
    {
        tong+=mang[i];
    }
    return tong;
}

float tb(int mang[],int n)
{
    int tong=0;
    float tbc;
    for(int i=0;i<n;i++)
    {
        tong+=mang[i];
    }
    tbc=(tong*1.0/n*1.0);
    return tbc;
}

void timkiem(int mang[],int n,int x)
{
    int vt=n;
    for(int i=0;i<n;i++)
    {
        if(x==mang[i])
        {
           vt=i;
           break;
        }
    }
    if(vt==n)
        cout<<"khong co phan tu "<<x<<" trong mang"<<"\n";
    else
        cout<<"da tim thay "<<x<<" o vi tri "<<vt<<" trong mang"<<"\n";
}

void sapxep(int mang[], int n)
{
    cout<<"mang tang dan: ";
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
        {
            if(mang[i]>mang[j])
            {
                int t=mang[i];
                mang[i]=mang[j];
                mang[j]=t;
            }
        }
    for(int i=0;i<n;i++)
    {
        cout<<mang[i]<<"  ";
    }
    cout<<"\n";

    cout<<"mang giam dan: ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<mang[i]<<"  ";
    }
    cout<<"\n";
}

void daonguoc(int mang[], int n)
{
    cout<<"mang dao nguoc: ";
    for(int i=n-1;i>=0;i--)
    {
        cout<<mang[i]<<"  ";
    }
    cout<<"\n";
}

int them(int mang[],int n,int a,int vt)
{
    for(int i=n;i>=vt;i--)
    {
        if(vt==i)
            mang[vt]=a;
        else
            mang[i]=mang[i-1];
    }
    return n=n+1;
}

int huy(int mang[],int n,int vt)
{
    for(int i=vt;i<n-1;i++)
    {
        mang[i]=mang[i+1];
    }
    return n=n-1;
}

void soptduong(int mang[],int n)
{
    int dem=0;
    int tong=0;
    for(int i=0;i<n;i++)
    {
        if(mang[i]>0)
        {
            tong=tong+mang[i];
            dem++;
        }
    }
    if(dem==0)
        cout<<"mang khong co so duong";
    else cout<<"mang co "<<dem<<" so duong\ntong so duong: "<<tong<<"\n";
}

bool doixung(int mang[],int n)
{
    int a;
    if(n%2==0)
        a=n/2;
    else a=(n/2)+1;
    int j=n-1;
    for(int i=0;i<a;i++)
    {
        if(mang[i]!=mang[j])
            return false;
        j--;
    }
    return true;
}

bool tanghaykhong(int mang[],int n)
{
    for(int i=0;i<n-1;i++)
        if(mang[i]>mang[i+1])
            return false;
    return true;
}

int main()
{
    int n=sophantu();
    int mang[50];

    //random mang
    int minn,maxx;
    cout<<"nhap min max: ";
    cin>>minn>>maxx;
    mang[n]=randommang(mang,n,maxx,minn);

    //nhập mảng
    nhapmang(mang,n);

    //xuất mảng
    cout<<"mang: ";
    xuatmang(mang,n);

    //lớn nhất nhỏ nhất
    nhonhatlonnhat(mang,n);

    //âm đầu tiên
    int adt=amdautien(mang,n);
    if(adt==0)
        cout<<"mang khong co so am"<<"\n";
    if(adt!=0)
        cout<<"so am dau tien cua mang la "<<adt<<"\n";

    //dương lớn nhất
    duongnhonhat(mang,n);

    //tổng mảng
    int tong=tongmang(mang,n);
    cout<<"tong cua mang la "<<tong<<"\n";

    //trung bình mảng
    float tbc=tb(mang,n);
    cout<<"Trung binh cua mang la: "<<tbc<<"\n";*/

    //tiềm kiếm trong mảng có phần tử nào bằng x
    int x;
    cout<<"nhap phan tu x de tim: ";
    cin>>x;
    timkiem(mang, n,x);

    //sắp xếp
    sapxep(mang,n);


    //đảo ngược
    daonguoc(mang,n);

    //thêm phần tử vào vị trí muốn thêm
    int a,vtk;
    cout<<"nhap phan tu them va vi tri muon them: ";
    cin>>a>>vtk;
    int lai=1;
    while(vtk>n)
    {
        cout<<"ban da nhap vi tri muon them vuot qua do dai cua mang! Nhan so?"<<"\n";
        cout<<"1 De them "<<a<<" vao vi tri cuoi cung!"<<"\n";
        cout<<"2 De nhap vi tri lai!"<<"\n";
        cout<<"Neu nhan khac 1 va 2 thi ct se mac dinh la so 1"<<"\n";
        cin>>lai;
        if(lai==2)
        {
            cout<<"nhap lai vi tri: ";
            cin>>vtk;
        }
        else vtk=n;
    }
    n=them(mang,n,a,vtk);
    cout<<"mang sau khi them: ";
    xuatmang(mang,n);

    //hủy phân tử ở vị trí muốn hủy
    int vthuy;
    cout<<"nhap vi tri muon huy: ";
    cin>>vthuy;
    while(vthuy>n-1)
    {
        cout<<"ban da nhap vi tri huy vuot qua do dai cua mang! Yeu cau nhap lai: ";
        cin>>vthuy;
    }
    n=huy(mang,n,vthuy);
    cout<<"mang sau khi huy: ";
    xuatmang(mang,n);

    //số phần tử dương
    soptduong(mang,n);

    //đối xứng hay không?
    if(doixung(mang,n)==true)
        cout<<"mang doi xung\n";
    if(doixung(mang,n)==false)
        cout<<"mang khong doi xung\n";

    //tăng hay không
    if(tanghaykhong(mang,n)==true)
        cout<<"mang tang\n";
    if(tanghaykhong(mang,n)==false)
        cout<<"mang khong tang\n";

    return 0;
}
