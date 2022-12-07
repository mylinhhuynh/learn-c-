#include <iostream>
using namespace std;
int main()
{
	int n, p=1, q=1;
	cout<<"Enter N: ";
	cin >> n;
	int i=1;
	if (n%2==0){
	   cout <<"N even: ";
	   i=2;
	}else{
		cout <<"N odd: ";
		i=3;
	}
	
	int giaithua = 1;
	while(i<=n)
	{
	     giaithua = giaithua*i;
		 i = i+2;
    }
    
    cout << giaithua << endl;
    return 0;
}
