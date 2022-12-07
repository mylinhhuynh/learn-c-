#include <iostream>
#include<math.h>
using namespace std;
void Prime(int a)
{
   for(int i=2;i<a/2;i++)
   {
   	if(a%i==0)
   	  {    cout<<"a is not a prime"	;
		   return ;
   	       
   	      
   	  	}
   	}
   	cout<<"a is a prime";
   	return ;
}

int main()
{
   int a;
   cin>>a;
   Prime(a);
   return 0;
}
