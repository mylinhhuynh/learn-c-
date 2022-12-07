#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main ()
{
	int n, s=0;
	cin >> n;
	
	for (int i=1; i<n; i++)
	{
		if (n%i==0)
			s+=i;
	}
	if (s==n)
		cout << n << " is a perfect number" << endl ;
		
	else
		cout << n << " is not a perfect number" << endl ;
	return 0;
}
