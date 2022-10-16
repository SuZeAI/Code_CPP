#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        set<long long> s ;
        vector<long long> v;
        long long tmp;
        for(long long i = 0; i < n; i++)
        {
            cin >> tmp;
            if(tmp >= 0 && tmp <= n - 1) s.insert(tmp);
        }
        for(long long i = 0; i < n ; i++)
        {
            if(s.find(i) != s.end()) v.push_back(i);
            else v.push_back(-1);
        }
        for(auto i : v)
            cout << i << " ";
        cout << endl;
    }
}