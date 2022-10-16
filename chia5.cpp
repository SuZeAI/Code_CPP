#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int r = 0;
        for(int i = 0; i< s.length(); i++)
        {
            if(s[i] == '1')
            {
                r = (2 * r + 1) % 5;
            }
            else
            {
                r = (2 * r) % 5;

            }
        }
        if(r == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}