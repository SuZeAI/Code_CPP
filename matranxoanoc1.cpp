#include <bits/stdc++.h>
using namespace std;
void input(int m, int n, int a[][105])
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}
void xoanoc(int m, int n, int a[][105])
{
    int count = 0 ;
    int ele = 0;
    while(1)    
    {
        for(int i = ele; i < n - ele; i++)
            cout << a[ele][i] << " ", count++;
        if(count == m * n) break;
        for(int i = ele + 1; i < m - ele; i++)
            cout << a[i][n - ele - 1] << " ", count++;
        if(count == m * n) break;
        for(int i = n - ele - 2; i >= ele; i-- )
            cout << a[m - ele - 1][i] << " ", count++;
        if(count == m * n) break;
        for(int i = m - ele - 2; i > ele; i--)
            cout << a[i][ele] << " ", count++;
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
        int m, n;
        cin >> m >> n;
        int a[105][105];
        input(m, n, a);
        xoanoc(m, n, a);
        cout << endl;
    }
    
}