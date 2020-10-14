#include <iostream>

using namespace std;

int main()
{
	int a[2], b[2], tong[2], tich[2];
	cout << "Nhap vao tu cua a: ";
	cin >> a[0];
	cout << "\nNhap vao mau cua a: ";
	cin >> a[1];
	cout << "\nNhap vao tu cua b: ";
	cin >> b[0];
	cout << "\nNhap vao mau cua b: ";
	cin >> b[1];
	
	tong[0]=a[0] + b[0];
	tong[1]=a[1] + b[1];
	
	tich[0]=a[0] * b[0];
	tich[1]=a[1] * b[1];
	
	 if (a[1]==0)
	{
		cout << "Ban nhap sai roi, vui long nhap lai voi mau khac 0 !!";
		cout << "\nNhap vao mau cua a: ";
		cin >> a[1];
	}
	if (b[1]==0)
	{
		cout << "Ban nhap sai roi, vui long nhap lai voi mau khac 0 !!";
		cout << "\nNhap vao mau cua b: ";
		cin >> b[1];
	}
	if(a[1]!=0 && b[1]!=0)
	{
		cout << "Tong cua 2 phan so la: " <<tong[0] <<"/" <<tong[1];
		cout << "\nTich cua 2 phan so la: " <<tich[0] <<"/" <<tich[1];
	}
	
	
}
