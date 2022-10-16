#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, tmp;
        cin >> n >> k;
        vector<int> v;
        for(int i =0; i < n; i++)
            {
                cin >> tmp;
                if(tmp <= k) v.push_back(tmp);
            }
        if(v.empty()) cout << "0\n";
        else 
        {
            int cnt = 0;
            for(int i = 0; i < v.size() - 1; i++)
                for(int j = i + 1; j < v.size(); j++)
                if(v[i] + v[j] == k) cnt++;
            cout << cnt << endl;
        }
        
    }
}