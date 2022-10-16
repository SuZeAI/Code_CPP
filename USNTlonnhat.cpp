#include <bits/stdc++.h>
using namespace std;

int snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //ios_base :: sync_with_stdio(0); cin.tie(0);
        long long n, i = 2;
        cin >>  n;
        for (; i <= sqrt(n); i++)
        {
            while(n % i == 0)
            {
                n /= i;
            }
        }
        if (n != 1) cout << n;
        else {
            cout << i - 1;

        }
        cout << endl;
        
    }
}