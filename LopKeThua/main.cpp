#include <iostream>
#include <stdio.h>

using namespace std;

//Tạo lớp con người và lớp sinh viên kế thừa lớp con người

class connguoi
{
protected:
    char* ten;
    int tuoi;
    char* diachi;

public:
    connguoi()
    {
        ten = new char[50];
        tuoi = 0;
        diachi = new char[50];
    }

    connguoi(char* a, int b, char* c)
    {
        ten = a;
        tuoi = b;
        diachi = c;
    }

    void nhap()
    {
        fflush(stdin);
        cout << "Nhap ten: ";
        gets (ten);
        cout << "Nhap tuoi: ";
        cin >> tuoi;
        fflush(stdin);
        cout << "Nhap dia chi: ";
        gets (diachi);
    }

    void xuat()
    {
        fflush(stdin);
        cout << "Ten: " << ten << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "Dia chi: " << diachi << endl;
    }
};


class sinhvien: public connguoi
{
private:
    char* mssv;
    char* sdt;
    float toan;
    float li;
    float hoa;

public:
    sinhvien():connguoi()
    {
        mssv = new char[50];
        sdt = new char[50];
        toan = 0;
        li = 0;
        hoa = 0;
    }

    sinhvien(char* a, int b, char* c, char* d, char* e, float f, float g, float h)
    {
        mssv = d;
        sdt = e;
        toan = f;
        li = g;
        hoa = h;
    }

    void nhap()
    {
        connguoi::nhap();
        fflush(stdin);
        cout << "Nhap ma so sinh vien: ";
        gets(mssv);
        cout << "Nhap so dien thoai: ";
        gets(sdt);
        cout << "Nhap diem Toan: ";
        cin >> toan;
        cout << "Nhap diem Li: ";
        cin >> li;
        cout << "Nhap diem Hoa: ";
        cin >> hoa;
    }

    void xuat()
    {
        connguoi::xuat();
        /*cout << "Ten: " << ten << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "Dia chi: " << diachi << endl;*/
        cout << "Ma so sinh vien: " << mssv << endl;
        cout << "So dien thoai: " << sdt << endl;
        cout << "Toan: " << toan << endl;
        cout << "Li: " << li << endl;
        cout << "Hoa: " << hoa << endl;
    }

    void trungbinhcong()
    {
        cout << "Diem trung binh: " << ((toan+li+hoa)/3) << endl;
    }
};


int main()
{
    sinhvien mang[50];\
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cout << "Nhap sinh vien thu " << (i+1) << " : " << endl;
        mang[i].nhap();
    }
    cout << endl;

    cout << "Danh sach sinh vien vua nhap: " << endl;
    for(int i=0; i<n; i++)
    {
        mang[i].xuat();
        cout << endl;
    }
    cout << endl;

    cout << "Diem trung binh sinh vien:" << endl;
    for(int i=0; i<n; i++)
    {
        mang[i].trungbinhcong();
        cout << endl;
    }
    return 0;
}
