#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, m;
    cin >> m >> s;
    int sum = s;
    if(m  > 1 && (s > 9 * m || s == 0))  cout << "-1 -1";
    else
    {
        int a[m];
        sum--;
        for(int i = m - 1; i > 0;i--)
            if(sum  > 9) {
                a[i] = 9;
                sum -= 9;
            }
            else 
            {
                a[i] = sum ;
                sum = 0;
            }
        a[0] = sum + 1;
        for(int i = 0; i < m;i++)
            cout << a[i];
        cout << " ";
        sum = s;
        for(int i = 0; i < m; i++)
            if(sum  > 9) {
                a[i] = 9;
                sum -= 9;
            }
            else 
            {
                a[i] = sum ;
                sum =0;
            }
        for(int i = 0; i < m;i++)
            cout << a[i];
    }

}