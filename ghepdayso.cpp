#include <bits/stdc++.h>
using namespace std;
bool cmp(const int a, const int b)
{
    return a < b;
}
int main()
{
    int t;
    cin >> t;
    int tmp;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v;
        for(int i = 0; i < n * m; i++)
            {
                cin >> tmp;
                v.push_back(tmp);
            }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        cout << endl;
    }
}