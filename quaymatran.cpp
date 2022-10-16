#include <bits/stdc++.h>

using namespace std;
void input(int m, int n, int a[][105])
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}
void output(int m, int n, int a[][105])
{
    for(int i = 0; i < m; i++)
        for(int j = 0;j < n; j++)
            cout << a[i][j] << " ";
}
void rotation(int m , int n, int a[][105])
{
    for(int i = 1; i <= min(m, n)/ 2;i++)
    {
        int tmp = a[i - 1][i -  1];
        for(int j = i - 1; j < m - i; j++)
            a[j][i - 1] = a[j + 1][i - 1];
        for(int j = i - 1; j < n  - i; j++)
            a[m - i][j] = a[m - i][j + 1] ;
        for(int j = m - i; j > i - 1; j--)
            a[j][n - i] = a[j - 1][n - i];
        for(int j =  n - i; j > i; j--)
            a[i - 1][j] = a[i - 1][j - 1];
        a[i - 1][i] = tmp;
    }

}
int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int m, n, a[105][105];
        cin >> m >> n;
        input(m, n, a);
        rotation(m , n, a);
        output(m, n, a);
        cout << endl;
    }
}