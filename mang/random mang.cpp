#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;


#define MAX 1000
void nhapMang(int arr[], int &n)
{

	srand(time(NULL));

	cout << "Nhap so luong phan tu n : ";
	cin >> n;

	if (n > 0)
{
	for (int i = 1; i < n; i++)
	{
		arr[i] = arr[i - 1] + rand() % 100;
	}
}
}


void xuatMang(int arr[], int n)
{

	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

int main()
{
	int Array[MAX]; 
	int n; 

	nhapMang(Array, n);
	xuatMang(Array, n);

	return 0;
}



