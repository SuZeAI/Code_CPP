#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, a[1005][3], cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < 3; j++)
                if(a[i][j] == 1) count++;
            if(count > 1 ) cnt++;
        }
    cout << cnt ;

}