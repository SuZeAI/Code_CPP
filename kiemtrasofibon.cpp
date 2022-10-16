#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n == 1 || n == 0) 
        {
            cout << "YES\n";
            continue;
        }
        long long f1 = 0, f2 = 1, fn = 0;
        while(fn < n)
        {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;
        }
        if(fn == n)
            cout << "YES\n";
        else 
            cout << "NO\n";e
    }
}