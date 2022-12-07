#include <iostream>
#include <string>
using namespace std;



int main()
{	
	int n;
    cout << "Nhap N: ";
    cin >> n;
    cout << "Input Array Elements:" << endl;
	int arr[n];

	// input array a
	cout << "Array input:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	cout << "\n Array  A:" << endl;
	// output array a A
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n Array square A:" << endl;
	// output square of array a B
	for (int i = 0; i < n; i++)
	{
		cout << arr[i]*arr[i]<< " ";
	}

	return 0;
}
