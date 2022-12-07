#include <bits/stdc++.h>
using namespace std;
int main() {
	long long r, p, n;
	cout<<"enter r ";
	cin>>r;
	cout<<"enter p ";
	cin>>p;
	cout<<"enter n ";
	cin>>n;
	long long result;
	result=1+r;
	cout<<p*pow(result,n);
	return 0;
}

