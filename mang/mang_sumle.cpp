#include <iostream>

using namespace std;

int main()
{
	int n, a[20],i, tong=0;
	cout << "Nhap vao so phan tu: ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cout << "nhap vao phan tu thu " << i+1 <<": ";
		cin >>	a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			tong +=a[i];
		}
	}
	cout <<"tong cac so le trong mang la: " <<tong;
	
}
