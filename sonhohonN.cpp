#include <iostream>
using namespace std;

int main()
{
	int n,i,kq;
	cout << "nhap mot so bat ky: ";
	cin >> n;
	cout << "cac so le nho hon " << n << " là: ";
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			cout << i <<" ";
		}
	}
	return n;
}
