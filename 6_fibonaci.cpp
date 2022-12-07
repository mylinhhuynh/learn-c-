#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "Nhap N: ";
    cin >> n;
    cout << "Fibonaci sequence:" << end;
    for (int count = 1; count <= n; ++count){
    	cout << Fibonacci(count) << " ";
	}

    return 0;
}
