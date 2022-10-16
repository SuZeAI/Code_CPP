#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll l, r;
        cin >> l >> r;
        ll n = sqrt(r), m = sqrt(l);
        int a[1000001] = {0};
        a[0] = 1;
        a[1] = 1;
        for ( int i = 2; i <=sqrt(n); i++)
            if (a[i] == 0)
            {
                for (int j = i * i; j <= n; j += i)
                    {
                        a[j] = 1;
                    }
            }
        ll count = 0;
        for (int i = m; i <= n; i++)
            if(a[i] == 0) count++;
        cout << count << endl;
    }
}
