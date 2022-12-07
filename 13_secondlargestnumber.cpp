#include <iostream>
#include<math.h>
using namespace std;
int SoSanh(int a,int b,int c)
{
	if(a>b&&a<c||a>c&&a<b)
	{
		return a;
	}
	if(b>a&&b<c||b>c&&b<a)
	{
		return b;
	}
	if(c>a&&c<b||c>b&&c<a)
	{
		return c;
	}
}

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   cout<<SoSanh(a,b,c);
   return 0;
}
