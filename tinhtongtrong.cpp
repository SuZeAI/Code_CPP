#include <bits/stdc++.h>
using namespace std;
int sum(int a, int b, int m[])
{
    int tong = 0;
    for (int i = a - 1; i <= b - 1; i++)
    {
        tong += m[i];
    }
    return tong;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        while(q--)
        {
            int m, k;
            cin >> m >> k;
            cout << sum(m, k, a) << endl;
        }
        
    }
}