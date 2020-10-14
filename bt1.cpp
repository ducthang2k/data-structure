#include <iostream>

using namespace std;

int main()
{
	float a,b,d;
	char c;
	cout <<"Nhap vao so thu nhat: ";
	cin >> a; 
	cout << "\nNhap vao so thu hai: ";
	cin >> b;
	cout <<"\nNhap vao phep tinh: ";
	cin >> c;
	
	if(b!=0)
	{
		switch(c)
		{
			case '-':
				{
					d=a-b;
					cout << "\nHieu 2 so " <<a <<" va " <<b <<" la: " <<d;
					break;
				}
			case '+':
				{
					d=a+b;
					cout << "\nTong 2 so " <<a <<" va " <<b <<" la: " <<d;
					break;
				}
			case '*':
				{
					d=a*b;
					cout << "\nTich 2 so " <<a <<" va " <<b <<" la: " <<d;
					break;
				}
			case '/':
				{
					d=a/b;
					cout << "\nThuong 2 so " <<a <<" va " <<b <<" la: " <<d;
					break;
				}
				default:
	    			cout << "\nKhong co phep toan " << c; 
	        		break;
		}}
	else {
			switch(c)
		{
			case '-':
				{
					d=a-b;
					cout << "\nHieu 2 so " <<a <<" va " <<b <<" la: " <<d;
					break;
				}
			case '+':
				{
					d=a+b;
					cout << "\nTong 2 so " <<a <<" va " <<b <<" la: " <<d;
					break;
				}
			case '*':
				{
					d=a*b;
					cout << "\nTich 2 so " <<a <<" va " <<b <<" la: " <<d;
					break;
				}
			case '/':
				{
					cout << "\nKhong thuc hien phep chia duoc.";
					break;
				}
				default:
	    			cout << "\nKhong co phep toan " << c; 
	        		break;
		}
	
	}
	return 1;
}
