#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, x, y;
        cin >> a >> x >> y;
        ll uc = __gcd(x, y);
        for(int i = 0 ; i < uc; i++)
        {
            cout << a;

        }
        cout << endl;
    }
}