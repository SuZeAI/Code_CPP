#include <bits/stdc++.h>

using namespace std;
void in(int n, int a[][105])
{
    int len = 4 * n;
    int j = 0, cnt = 0;
    while(1)
    {
        for(int i = j; i < len; i++)
            cout << a[i][j] << " ", cnt++;
        if(cnt ==  8 * n) return;
        len--;
        for(int i = j + 1; i < len;i++)
            cout << a[len - 1][i] << " ", cnt++;
        if(cnt == 8 * n) return;  
        
        for(int i = len ; i >= j + 1; i--)
            cout << a[i][len] << " ", cnt++;
        if(cnt == 8 * n) return;  
        len--;
        for(int i = len; i >= j + 2;i-- )
            cout << a[len + 1][i] << " ", cnt++;
        if(cnt == 8 * n) return;
        len--;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[105][105], cnt = 1;
        for(int i = 0; i < 4 * n; i++)
            for(int j = 0; j < 4 * n; j++)
                a[i][j] = cnt++;
        in(n, a);
    }
}