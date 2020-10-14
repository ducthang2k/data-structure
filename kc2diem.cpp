#include<iostream>
#include<math.h>
using namespace std;

struct DIEM
{
	int td;
	int hd;
};


void NhapToaDo(DIEM &d)
{
	cout<<"Nhap Hoanh Do: "; cin>> d.hd;
	cout<<"Nhap Tung Do: "; cin>> d.td;
}

void XuatToaDo(DIEM d)
{
	cout<<"("<<d.hd<<","<<d.td<<")";
}

double KhoangCach(DIEM &d1, DIEM &d2)
{
	double kc;
	kc=sqrt(double(d1.hd-d2.hd)*(d1.hd-d2.hd)+(d1.td-d2.td)*(d1.td-d2.td));
	return kc;
}

int main()
{
	DIEM Diem1, Diem2;
	double Kc;
	cout<<"Diem A:\n";
	NhapToaDo(Diem1);

	cout<<"\nDiem B: \n";
	NhapToaDo(Diem2);

	cout<<"\nToa do A la: ";
	XuatToaDo(Diem1);

	cout<<"\nToa do  B la: ";
	XuatToaDo(Diem2);
	
	Kc=KhoangCach(Diem1,Diem2);
	cout<<"\nKhoang cach giua diem A va diem B la: "<<Kc;
	
	cout<<endl;
	return 0;
}
	
