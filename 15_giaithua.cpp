#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
     int x, n;
	 long long giaithua = 1;

     cout<<"Nhap x :";
     cin>>n;

     for (int x = 1; x <= n; x++)
     {
         giaithua = giaithua * x;
     }

     cout<<n<<"! = "<<giaithua;
     
     return 0;
 }
