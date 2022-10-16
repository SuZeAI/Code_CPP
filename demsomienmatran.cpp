#include <bits/stdc++.h>

using namespace std;
void input(int m, int n, int a[][100])
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

void DFS(int i , int j, int m, int n, int a[][100], pair<int, int> pair[])
{
    a[i][j] = 0;
    for(int l = 0; l < 8; l++)
    {
        int h = i + pair[l].first;
        int k = j + pair[l].second;
        if(h >= 0 && h < m && k >= 0 && k < n && a[h][k] == 1)
            DFS(h, k, m, n, a, pair);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n, cnt  = 0;
        cin >> m >> n;
        pair<int, int> pair[8] = {{0,-1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, -1}, {-1, 0}, {-1, 1}};
        int a[100][100];
        input(m, n, a);
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(a[i][j] == 1)
                    {
                        DFS(i, j, m, n, a, pair);
                        cnt++;
                    }
        cout << cnt << endl;
    }
}