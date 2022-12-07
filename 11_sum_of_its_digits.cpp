#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int n;
   int res;
   int sum=0;
   cin>>n;
   while(n>0)
   {
   	res=n%10;
   	sum=sum+res;
   	n=n/10;
   }
   cout<<sum;
   return 0;
}
