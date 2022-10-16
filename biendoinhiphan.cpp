#include <bits/stdc++.h>

using namespace std;
void mang(int a, int b, int m, int n, int arr[][100])
{
    for(int i = 0; i < n; i++)
        arr[a][i] = 1;
    for (int i = 0; i < m ; i++)
        arr[i][b] = 1;
}

int main()
{
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int m,  n;
        cin >> m  >> n;
        int a[m][n], b[100][100] = {0};
        for  (int i = 0 ; i < m; i++)
            for(int j = 0; j < n; j++)
                {
                    cin >> a[i][j];
                    if (a[i][j]== 1) mang(i, j, m, n, b);
                }
        for  (int i = 0 ; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    cout << b[i][j];
                }
                cout << endl;
            }
    }
}