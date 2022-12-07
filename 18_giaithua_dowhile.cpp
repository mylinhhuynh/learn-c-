#include <iostream>
#include<math.h>
using namespace std;
int Check(int n)
{
   int i=1;
   int S=1;
   if(n%2==0)
    {
      do
      {
      	i++;
   	    if(i%2==0)
   	       {
   	     	S=S*i;
			}
      }
      while(i<n);
    }
   else
    {
	 do
      {
      	i++;
   	    if(i%2!=0)
   	      {
   	    	S=S*i;
		   }
      }
      while(i<n);	
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
