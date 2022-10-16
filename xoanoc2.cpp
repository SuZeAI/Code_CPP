#include <bits/stdc++.h>
using namespace std;
void input(int n, int m, int a[][105])
{
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m ;j++)
            cin >> a[i][j];

}
void xoanoc2(int m, int n, int a[][105], int b[])
{
    int count = 0 ;
    int ele = 0;
    while(1)    
    {
        for(int i = ele; i < n - ele; i++)
             b[count] = a[ele][i], count++;
        if(count == m * n) break;
        for(int i = ele + 1; i < m - ele; i++)
            b[count] = a[i][n - ele - 1] , count++;
        if(count == m * n) break;
        for(int i = n - ele - 2; i >= ele; i-- )
            b[count] = a[m - ele - 1][i] , count++;
        if(count == m * n) break;
        for(int i = m - ele - 2; i > ele; i--)
            b[count] = a[i][ele] , count++;
        if(count == m * n) break;
        ele++;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)    
    {
        int n, m, k, a[105][105], b[10000];
        cin >> n >> m >> k;
        input(n, m, a);
        xoanoc2(n, m, a, b);
        cout << b[k - 1] << "\n";
    }
}