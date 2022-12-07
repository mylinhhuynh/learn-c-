#include <iostream>
using namespace std; 
 
int main()
{
    int g1, g2, g3, sum;
 
    cout << "Goc 1: ";
    cin >> g1;
    cout << "Goc 2: ";
    cin >> g2;
    cout << "Goc 3: ";
    cin >> g3;
     
    sum = g1 + g2 + g3; 
 
    if(g1 != 0 && g2 != 0 && g3 != 0 && sum == 180) {
        cout << "Tam giac co 3 goc lan luot la " << g1 << ", " << g2 << ", " << g3 << " la hop le";
    } else {
        cout << "Tam giac co 3 goc lan luot la " << g1 << ", " << g2 << ", " << g3 << " la khong hop le";
    }
 
    return 0;
}
