#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n * n];
        for (int i = 0; i < n * n; i++)
            cin >> a[i];
        sort(a, a + n * n);
        cout << a[k - 1] << endl;
    }
}