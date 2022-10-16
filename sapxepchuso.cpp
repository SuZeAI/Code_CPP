#include <bits/stdc++.h>

using namespace std;
void getnumber(int n, set<int> &s)
{
    int a;
    while(n)
    {
        a = n % 10;
        s.insert(a);
        n /= 10;
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int tmp;
        set<int> s;
        for(int i = 0; i < n; i++)
            {
                cin >> tmp;
                getnumber(tmp, s);
            }
        for(auto idx : s)
        {
            cout << idx << " ";
        }
        cout << endl;
    }
}