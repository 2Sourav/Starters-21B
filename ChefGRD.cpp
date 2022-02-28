
        
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
   
    cin >> t;
   
    while (t--)
    {    
        int n, x, y;
       
    cin >> n >> x >> y;
    if (x % 2 == 0 && y % 2 == 1)
        cout << 1 << "\n";
       
    else if (x % 2 == 1 && y % 2 == 0)
        cout << 1 << "\n";
       
    else
   
        cout << 0 << "\n";
    }
}