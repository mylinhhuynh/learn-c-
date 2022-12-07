#include <iostream>
using namespace std;
int main (){
	int n,i,t;
	
	for(int n=1; n<10; n++)
	{   cout<<"\n";
		for(int i=1; i<=10; i++)
		{
			t=n*i;
			cout<<n<<"x"<<i<<"="<<t<<"\n";
		}	
	}
	
	return 0;
}


