#include <bits/stdc++.h>

using namespace std;
void input(long long n, long long a[])
{
    for(long long i = 0; i < n; i++)
        cin >> a[i];
}
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,m;
        cin >> n >>  m;
        long long a[n], b[m];
        input(n, a);
        input(m, b);
        sort(a, a + n), sort(b, b + m);
        cout << a[n - 1] * b[0] << endl;
    }
}