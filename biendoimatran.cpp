#include <bits/stdc++.h>

using namespace std;
void input(int m, int n, int a[][105])
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
}

int sum_col(int m, int n, int a[][105], int col)
{
    int sum = 0;
    for(int i = 0; i < m; i++)
        sum += a[i][col];
    return sum;
}

int sum_row(int m, int n, int a[][105], int row)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += a[row][i];
    return sum;
}
void find_min(int m, int n, int a[][105])
{
    int min_row = 0, value_row = sum_row(m, n, a, 0);
    int min_col = 0, value_col = sum_col(m, n, a, 0);;
    for(int i = 1; i < n; i++)
    {
        int sum = sum_row(m, n, a, i);
        if(value_row >= sum) value_row = sum, min_row = i;
    }
    for(int i = 1; i < m; i++)
    {
        int sum = sum_col(m, n, a, i);
        if(value_col >= sum) value_col = sum, min_col = i;
    }
    a[min_row][min_col]++;
}

int check(int m , int n, int a[][105])
{
    int value_row = sum_row(m, n, a, 0);
    int value_col = sum_col(m, n, a, 0);;
    for(int i = 1; i < n; i++)
    {
        int sum = sum_row(m, n, a, i);
        if(value_row != sum) return 0;
    }
    for(int i = 1; i < m; i++)
    {
        int sum = sum_col(m, n, a, i);
        if(value_col != sum) return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n, a[105][105], cnt = 0;
        cin >> m ;
        n = m;
        input(m, n, a);
        while(!check(m, n, a))
        {
            find_min(m , n, a);
            cnt++;
        }
        cout << cnt << endl;
    }
}