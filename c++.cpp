#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;

void cau1()
{

    int a;
    cout<<"-----------------------LTHDT-----------------------\nChon cau thuc thi:\n2. Thuc thi cau 2\n3. Thuc thi cau 3\n---------------------------------------------------\n";
    cin>>a;
    do{
    switch(a)
    {
        case 2:
            {
                void cau2();
                cau2();
                a=0;
                break;
            }
        case 3:
            {
                void cau3();
                cau3();
                a=0;
                break;
            }
        default:
            {
                while(a!=2 && a!=3)
                {
                    cout<<"nhap sai yeu cau nhap lai: ";
                    cin>>a;
                }
            }
        }
    }while(a==2||a==3);

}
void cau2()
{
    int n;
    cout<<"nhap so phan tu cua mang mot chieu: ";
    cin>>n;
    int mang[25];
    int minn,maxx;
    cout<<"nhap doan min max: ";
    cin>>minn>>maxx;
    while(minn>maxx)
    {
        cout<<"min lam sao co the lon hon max ha db, yeu cau nhap lai: ";
        cin>>minn>>maxx;
    }
    srand((int) time(0));
    for(int i=0;i<n;i++)
    {
        mang[i]=minn+rand()%(maxx+1-minn);
    }
    cout<<"mang sao khi random: ";
    for(int i=0;i<n;i++)
    {
        cout<<mang[i]<<"  ";
    }
    cout<<"\n";
    int demle=0;
    for(int i=0;i<n;i++)
    {
        if(mang[i]%2!=0)
            demle++;
    }
    cout<<"so phan tu le cua mang la: "<<demle<<"\n";
    int vtnn=0;
    int demvt=0;
    int minnn=mang[0];
    for(int i=1;i<n;i++)
    {
        if(minnn>=mang[i])
        {
             minnn=mang[i];
             demvt++;
        }
    }
    int mangvt[demvt];
    for(int i=0;i<n;i++)
    {
        if(minnn==mang[i])
            mangvt[i]=i;
    }
    cout<<"phan tu nho nhat la "<<minnn<<" o vi tri ";
    for(int i=0;i<demvt;i++)
    {
        if(i==demvt-1)
            cout<<mang[i]<<"\n";
        else cout<<mang[i]<<", ";
    }
    int tong=0;
    for(int i=0;i<n;i++)
    {
        if(mang[i]%2==0)
            tong=tong+mang[i];
    }
    cout<<"tong cac phan tu chan la: "<<tong<<"\n";
}
void cau3()
{
    int dong,cot;
    int mang[25][25];
    cout<<"nhap so dong so cot: ";
    cin>>dong>>cot;
    for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
            cout<<"nhap phan tu o vi tri ["<<i<<","<<j<<"]: ";
            cin>>mang[i][j];
        }
    cout<<"ma tran:\n";
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            cout<<mang[i][j]<<"  ";
        }
        cout<<"\n";
    }
    cout<<"Vi tri dong=cot\n";
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(i==j)
                cout<<"phan tu "<<mang[i][j]<<" o vi tri "<<i<<"="<<j<<"\n";
        }
    }
}



int main()
{
    cau1();
    char tt;
    cout<<"Ban muon tiep tuc? Hay nhan phim l: ";
    cin>>tt;
    while(tt=='l')
        cau1();
    return 0;
}
