#include <bits/stdc++.h>

using namespace std;
int find_k(int k, set<int> v )
{
    for(auto idx = v.begin(); idx != v.end(); ++idx)
    {
        if(*idx % k != 0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n == 1) 
            cout << "0\n";
        else{
            int a[n];
            vector<int> vec;
            set<int> one, v;
            for(int i = 0; i  < n; i++)
                {
                    cin >> a[i];    
                    if(a[i] > 0)  vec.push_back(a[i]),one.insert(a[i]);
                }
            if(one.size() == 1) cout << "0\n";
            else 
            {
                int cnt = 0;
                sort(vec.begin(), vec.end());
                for(int i = 1; i < vec.size(); i++)
                {
                    v.insert(vec[i] - vec[i - 1]);
                }
                int len = *v.begin();
                for(int k = 1; k <= len; k++)
                {
                    if(find_k(k, v)) cnt++;
                }
                cout << cnt << "\n";
            }
            
        }
        

    }
}