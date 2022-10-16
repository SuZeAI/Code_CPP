#include <bits/stdc++.h>
#define cont 1000000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int i = n - 1; i >= 0; i--)
            cin >> a[i];
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            long long po = 1; 
            for (int j = 0; j < i; j++ )
                 po = (po * x) % cont;
            sum += a[i] * po;
            // sum += a[i] * pow(x, i);
        }
        if(sum > cont) sum %= cont;
        cout << sum << endl;

    }
}