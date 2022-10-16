#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, tmp, a[10005] = {0};
        cin >> n;
        a[0] = 1;
        a[1] = 1;
        int f0 = 0, f1 = 1, fn = 0; 
        while(fn < 10005)
        {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            a[fn] = 1;
        }
        for(int i = 0; i < n; i++)
            {   
                cin >> tmp;
                if(a[tmp] == 1) cout << tmp << " ";
            }
        cout << endl;

    }
}