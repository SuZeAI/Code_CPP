#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n, a, b, count = 0;
    cin >> m >> n >> a >> b;
    for (int i = m; i <= n;i++)
        {
            if (i % a == 0) count++;
            if (i % b == 0) count++;
            if (i % a == 0 && i % b == 0) count--;

        }
        cout << count << endl;
    }
}