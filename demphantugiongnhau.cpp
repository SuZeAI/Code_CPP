#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cnt = 0;
        cin >> n;
        int a[n][n];
        set<int> cnte;
        for(int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                cnte.insert(a[i][j]);
            }
        for(auto i : cnte)
        {
            int check = 0;
            for(int j =0; j < n; j++)
            {
                if(count(a[j], a[j] + n, i) <= 0) check = 1;
            }
            if(check == 0) cnt++;
        }
        cout << cnt << endl;
        
    }

}