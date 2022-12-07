#include <iostream>
#include<math.h>
using namespace std;
int Check(int n)
{
   int S=1;
   if(n%2==0)
    {
      for(int i=2;i<=n;i++)
      {
   	    if(i%2==0)
   	     {
   	     	S=S*i;
			}
      }
    }
   else
    {
	for(int i=2;i<=n;i++)
      {
   	    if(i%2!=0)
   	    {
   	    	S=S*i;
		   }
      }
   }
   return S;
}
int main()
{
   int n; 
   cin>>n;
   cout<<Check(n); 
   return 0;
}
