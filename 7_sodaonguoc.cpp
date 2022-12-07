#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

long int a;
cout << "Nhap mot so nguyen : " << endl;
cin>>a;
int sum=0;
int res;
while(a)
{
	res=a%10;
	sum=sum*10+res;
	a=a/10;
	}
	cout<<sum;
return 0;
}

