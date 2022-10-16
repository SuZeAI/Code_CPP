#include <bits/stdc++.h>

using namespace std;
int max3(int m, int n, int a[], int b[])
{
    int sum1 = 0, sum2 , max = 0;
    for(int i = 0; i < m; i++)
    {
        sum1 += a[i];
        sum2 = 0;
        for(int j = i + 1; j < n; j++ )
            sum2 += b[j];
        max = (max < sum1 + sum2) ? (sum1 + sum2) : max;
    }
   return max;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m], b[n];
        for(int i = 0; i < m; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];
        int max1 = max3(m, n, a, b);
        int max2 = max3(n, m, b, a);
        int max = max1 > max2 ? max1 : max2;
        cout << max << endl;

    }
}