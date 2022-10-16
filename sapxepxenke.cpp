#include <bits/stdc++.h>

using namespace std;
// 0 1 2 3 4 5 6 7 8
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for(int i = n - 1; i > n / 2; i--)
        {
            cout << a[i] << " " << a[n - 1 - i] << " ";
        }
        if(n % 2 == 0) cout << a[n / 2] <<  " " << a[n - 1 - n / 2];
        else 
            cout << a[n / 2];
        cout << endl;
    }
}