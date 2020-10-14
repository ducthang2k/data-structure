#include <iostream>

using namespace std;

/*void swap (int *a, int *b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
*/
int main()
{
	int n, a[30], i, j, t;
	cout << "Nhap vao so phan tu: ";
	cin >> n;
	for(i=0;i<n;i++)
	{
		cout << "nhap vao phan tu thu " << i+1 <<": ";
		cin >>	a[i];
	}
	
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(a[i] > a[j])
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	
	cout <<"Mang vua sap xep (tang dan) la: ";
	for(i=0;i<n;i++)
	cout << a[i] << " ";
}
