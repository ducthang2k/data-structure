#include <iostream>

using namespace std;

void nhap(int a[][100], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j = 0; j <n; j++)
		{
			cout << "Nhap vao phan tu thu " << i << "-" << j <<": ";
			cin >> a[i][j];
		}
	}
}

void xuat(int a[][100], int m, int n)
{
	for(int i=0; i< m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout << a[i][j] <<"  ";	
		}
		cout << endl;
	}
}

/*int tongmang(int a[][100], int b[][100], int c[][100] ,int m, int n)
{
	for(int i = 0; i <m; i++)
	{
		for (int j = 0; i <n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}*/

void XoaDong(int a[][100],int m,int n)
{
	 int dong; 
	 cout << "nhap dong can xoa: "; 
	 cin >> dong;
	    for(int i=dong;i<n-1;i++)
	 for(int j=0;j<m;j++)
	 {
		 a[i][j]=a[i+1][j];
	 }
	  m--;
	 xuat(a,m,n);    
}

int tongDong(int a[][100], int m, int dong)
{
	int sum = 0;
	for (int j = 0; j < m; j++)
		sum += a[dong][j];
	cout << sum;
	return sum;
}

int tongCot(int a[][100], int n, int cot)
{
	int sum= 0;
	for (int i = 0; i < n; i++)
		sum += a[i][cot];
	cout << sum;
	return sum;
}

int Max(int a[][100], int m, int n)
{
	int i, j, max;
	max = a[0][0];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			if (a[i][j] > max)
				max = a[i][j];
	}
	cout << max;	
	return max;
}

void ThemDong(int a[][100], int m, int n)
{
	
}

int main()
{
	int m, n, mang [100][100],i,j;
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "\nNhap so cot: ";
	cin >> n;
	cout << "Nhap vao mang thu 1: " << endl;
	//int mang[m][n];
	nhap(mang,m,n);
	cout << "Mang vua nhap la: \n";
	xuat(mang,m,n);
	cout << endl;
	cout << "Nhap vao mang thu 2: " << endl;
	int mang1[100][100];
	nhap(mang1,m,n);
	cout << "Mang vua nhap la: \n";
	xuat(mang1,m,n);
	cout << endl;
	int mangtong[100][100];
	for(i = 0; i <m; i++)
	{
		for (j = 0; j <n; j++)
		{
			mangtong[i][j] = mang[i][j] + mang1[i][j];
		}
 	}		
	//tongmang(mang,mang1,mangtong,m,n);
	cout << "Tong 2 mang vau nhap la: \n";
	xuat(mangtong,m,n);
	cout << endl;
	XoaDong(mang,m,n);
	int a,b;
	cout << "Nhap dong can tinh tong: ";
	cin >> a;
	cout << "Tong dong " << a << "cua mang la: ";
	tongDong(mang,m,a);
	cout << endl;
	cout << "Nhap cot can tinh tong: ";
	cin >> b;
	cout << "Tong cot " << b << "cua mang la: ";
	tongCot(mang,n,b);
	cout << endl;
	cout << "gia tri lon nhat trong mang la: ";
	Max(mang,m,n);
	
}
