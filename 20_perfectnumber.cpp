#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int n;
   int sum=0;
   cin>>n;
   for(int i=1;i<=n/2;i++)
     {
     	if(n%i==0)
     	  {
     	  	sum=sum+i;
		   }		   
	 }
	 if(sum==n)
	  {
	  	cout<<"n is a perfect number";
	  }
	  else 
	  {
	  	cout<<"n is not a perfect number";
	  }
   return 0;
}
