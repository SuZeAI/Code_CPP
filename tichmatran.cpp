#include <bits/stdc++.h>
using namespace std;
void input(int a, int b, int arr[][55])
{
    for(int i = 0; i < a; i++)
        for(int j =0; j < b; j++)
            cin >> arr[i][j];
}
void output(int m, int n,int arr[][55])
{
    for(int i = 0; i < m; i++)
        {
            for(int j =0; j < n; j++)
                cout << arr[i][j] << " ";
                cout << endl;
        }
}
int main()
{
    int m, n, p;
    cin >> n >> m >> p;
    int a[55][55], b[55][55], c[55][55] = {0};
    input(n, m, a);
    input(m, p, b);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < p; j++)
        {
            
            for(int k = 0; k < m; k++) c[i][j] += a[i][k] * b[k][j];
        }
    }
    output(n, p, c);
}
