#include <iostream>
#include <stdlib.h>

using namespace std;

void nhapmang(int mang[25][25],int dong,int cot)
{
    for(int i=0;i<dong;i++)
    {
        for(int j=0;j<cot;j++)
        {
            cout<<"nhap phan tu o vi tri ["<<i<<", "<<j<<"] : ";
            cin>>mang[i][j];
        }
    }
}

void xuat(int mang[25][25],int dong,int cot)
{
    for(int i=0;i<dong;i++)
    {
       for(int j=0;j<cot;j++)
        {
            cout<<mang[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void minnmaxx(int mang[25][25],int dong,int cot,int minn,int maxx)
{
    minn=maxx=mang[0][0];
    for(int i=0;i<dong;i++)
    {
       for(int j=0;j<cot;j++)
        {
            if(minn>mang[i][j])
                minn=mang[i][j];
            if(maxx<mang[i][j])
                maxx=mang[i][j];
        }
    }
    cout<<"Min: "<<minn<<"\nMax: "<<maxx<<"\n";
}

void sapxep(int mang[25][25],int dong,int cot)
{
    for(int i=0;i<dong;i++)
    {
       for(int j=0;j<cot;j++)
       {
           for(int s=0;s<dong;s++)
           {
               for(int k=0;k<cot;k++)
                {
                    if(mang[i][j]<mang[s][k])
                    {
                        int t=mang[i][j];
                        mang[i][j]=mang[s][k];
                        mang[s][k]=t;
                    }
                }
           }
       }
    }
}

int themcuoimang(int mang[25][25],int dong,int cot)
{
    for(int i=0;i<cot;i++)
    {
        cout<<"nhap phan tu o vi tri ["<<dong<<", "<<i<<"] : ";
            cin>>mang[dong][i];
    }
    return dong=dong+1;
}

int xoa(int mang[25][25],int dong,int cot,int k)
{
    if(k>dong)
        return dong;
    else
    {
        for(int i=k-1;i<dong-1;i++)
    {
       for(int j=0;j<cot;j++)
       {
           mang[i][j]=mang[i+1][j];
       }
    }
    return dong=dong-1;
    }
}

void timkiemvt(int mang[25][25],int dong,int cot)
{
    int dem4=0;
    for(int i=0;i<dong;i++)
    {
       int dem3=0;
       if(dem3==1)
            break;
       for(int j=0;j<cot;j++)
       {
           int dem=0;
           for(int k=0;k<cot;k++)
           {
               if(mang[i][j]<mang[i][k])
               {
                   dem++;
                   break;
               }
           }
           if(dem==0)
           {
               int dem2=0;
               for(int m=0;m<dong;m++)
               {
                   if(mang[i][j]>mang[m][j])
                   {
                       dem2++;
                       break;
                   }
               }
               if(dem2==0)
               {
                   cout<<mang[i][j]<<" la phan tu lon nhat trong dong va nho nhat trong cot nam o vi tri ["<<i<<", "<<j<<"]\n";
                   dem3++;
                   dem4++;
                   break;
               }
           }
       }
    }
    if(dem4==0)
        cout<<"mang khong co phan tu nao vua lon nhat trong dong vua nho nhat trong cot ca!\n";
}

void tonghmt(int mang[25][25],int dong,int cot,int mang2[25][25],int mangtong[25][25])
{
    for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
            mangtong[i][j]=mang[i][j]+mang2[i][j];
        }
}

void tichhmt(int mang[25][25],int dong,int cot,int mang2[25][25],int mangtich[25][25])
{
    for(int i=0;i<dong;i++)
        for(int j=0;j<cot;j++)
        {
            mangtich[i][j]=mang[i][j]*mang2[i][j];
        }
}

int main()
{
    int mang[25][25];

    int dong,cot;

    cout<<"nhap so dong cua mang: ";
    cin>>dong;
    cout<<"nhap so cot cua mang: ";
    cin>>cot;

    //nhap
    nhapmang(mang,dong,cot);

    //xuat
    cout<<"ma tran: \n";
    xuat(mang,dong,cot);

    //min,max
    int minn,maxx;
    minnmaxx(mang,dong,cot,minn,maxx);

    //sap xep
    sapxep(mang,dong,cot);
    cout<<"mang sau khi sap xep:\n";
    xuat(mang,dong,cot);

    //thêm dòng v vào cuối mảng
    dong=themcuoimang(mang,dong,cot);
    cout<<"mang sau khi them cuoi:\n";
    xuat(mang,dong,cot);

    //xóa dòng thứ k
    int k;
    cout<<"ban can xoa dong thu may? ";
    cin>>k;
    k=k;
    dong=xoa(mang,dong,cot,k);
    cout<<"mang sau khi xoa o dong thu "<<k<<":\n";
    xuat(mang,dong,cot);

    //tìm kiếm vt
    timkiemvt(mang,dong,cot);

    //cộng nhân 2 ma trận;
    int dong2,cot2;
    int mang2[25][25];
    cout<<"nhap so dong cua mang 2: ";
    cin>>dong2;
    cout<<"nhap so cot cua mang 2: ";
    cin>>cot2;
    int lai;
    int mangtong[25][25],mangtich[25][25];
    if(dong2!=dong||cot2!=cot)
    {
        cout<<"ban da nhap cot va dong cua mang 2 khac mang 1 nen khong the thuc hien dc phep cong va nhan! Nhan so?"<<"\n";
        cout<<"1 De cot va dong cua mang 2 bang voi mang 1\n";
        cout<<"Nhan so bat ki de khong thuc hien!"<<"\n";
        cin>>lai;
        if(lai==1)
        {
            dong2=dong;
            cot2=cot;
        }
    }
    if(dong2=dong&&cot2==cot)
    {
        nhapmang(mang2,dong2,cot2);
            cout<<"mang 2:\n";
            xuat(mang2,dong2,cot2);
            tonghmt(mang,dong,cot,mang2,mangtong);
            tichhmt(mang,dong,cot,mang2,mangtich);
            cout<<"mang sau khi cong hai mang lai:\n";
            xuat(mangtong,dong,cot);
            cout<<"mang sau khi nhan hai mang lai:\n";
            xuat(mangtich,dong,cot);
    }

    return 0;
}
