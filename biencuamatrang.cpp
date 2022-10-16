#include <bits/stdc++.h>

using namespace std;
void input(int n, int a[][105])
{
    for(int i = 0; i < n; i++)
        for (int j = 0; j < n ;j++)
            cin >> a[i][j];
}
int main()
{
    int t;
    cin >> t; 
    while(t--)
    {
        int n, a[105][105];
        cin >> n;
        input(n, a);
        for (int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
               {
                    if(i == 0 || i == n - 1)
                        cout << a[i][j] << " ";
                    else 
                    {
                        if(j == 0 || j == n - 1)
                            cout << a[i][j] << " ";
                        else 
                        {
                            cout << "  ";
                        }
                    }
               }
               cout << endl;     
        }
    }
}