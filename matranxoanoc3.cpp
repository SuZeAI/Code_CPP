#include <bits/stdc++.h>
using namespace std;
void input(int m, int n, int a[])
{
    for(int i = 0; i < m * n; i++)
            cin >> a[i];
}
void output(int m, int n, int a[][105])
{
    for(int i = 0; i < m; i++)
        {
            for(int j = 0;j < n; j++)
            cout << a[i][j] << " ";
            cout << endl;
        }
}
void xoanoc(int m, int n, int b[], int a[][105])
{
    int count = 0 ;
    int ele = 0;
    while(1)    
    {
        for(int i = ele; i < n - ele; i++)
            a[ele][i] = b[count], count++;
        if(count == m * n) break;
        for(int i = ele + 1; i < m - ele; i++)
            a[i][n - ele - 1] = b[count], count++;
        if(count == m * n) break;
        for(int i = n - ele - 2; i >= ele; i-- )
            a[m - ele - 1][i] = b[count], count++;
        if(count == m * n) break;
        for(int i = m - ele - 2; i > ele; i--)
            a[i][ele] = b[count], count++;
        if(count == m * n) break;
        ele++;
    }
}
int main()
{
        int m, n;
        cin >> n;
        m = n;
        int a[n * n], b[105][105];
        input(m, n, a);
        sort(a, a + n * n);
        xoanoc(m, n,a, b);
        output(m, n, b);
    
}