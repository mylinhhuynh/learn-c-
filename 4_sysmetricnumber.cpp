#include <bits/stdc++.h>
using namespace std;

 
bool isSelfsymmetricNumber(int n)
{  
  
    int divisor = 1;
    while (n / divisor >= 10)
        divisor *= 10;
 
    while (n != 0)
    {
        int leading = n / divisor;
        int trailing = n % 10;
 
        
        if (leading != trailing) 
            return false;
 
        
        n = (n % divisor) / 10;
 
        
        divisor = divisor / 100;
    }
    return true;
}
 
int main()

{	int n;
	cout << "Nhap N : ";
    cin >> n;
    if (isSelfsymmetricNumber(n) ){
    	cout << "Yes, it is Self-symmetric Number";

	} else{
		cout << "No, not Self-symmetric Number";
	}
    
    return 0;
}
