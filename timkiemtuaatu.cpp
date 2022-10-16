#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int tmp, check = 0;
        for(int i = 0;i < n; i++)
        {
            cin >> tmp;
            if(tmp == k) 
            {
                cout << i + 1 << endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "-1\n";
        
    }
}