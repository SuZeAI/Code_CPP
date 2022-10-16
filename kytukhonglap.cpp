#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string s;
        cin >> s;
        set<char> v;
        for(int i = 0; i < s.length(); i++)
        {
            v.insert(s[i]);
        }
        for(auto i : v)
        {
            int cnt = count(s.begin(), s.end(), i);
            if (cnt > 1) 
            {
                int idx = s.rfind(i);
                while(idx != -1)
                {
                    s.erase(idx, 1);
                    idx = s.rfind(i);
                }
            }
        }
        
        cout << s << endl;
    }
}