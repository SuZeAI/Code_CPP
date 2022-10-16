#include <bits/stdc++.h>

using namespace std;

bool is_mountain(int l, int r, int a[])
{
    int max = a[l], idx = l;
    for(int i = l + 1; i <= r; i++)
        if(max < a[i]) max  = a[i], idx = i;
    for(int i = l; i < idx; i++)
        if(a[i] > a[i + 1]) return false;
    for(int i = r; i > idx; i--)
        if(a[i] > a[i - 1]) return false;  
    return true;
}
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
            cin >> a[i];    
        int l, r;
        cin >> l >> r;
        if(is_mountain(l, r, a) == true)
            cout << "Yes\n";
        else 
            cout << "No\n";
    }
}