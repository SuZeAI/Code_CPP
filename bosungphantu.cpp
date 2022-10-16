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
    while(t--)
    {
        int n;
        cin >>n;
        set<int> v;
        int tmp;
        for(int i = 0; i < n; i++)
        {
            cin >> tmp;
            v.insert(tmp);
        }
        cout << *v.rbegin()- *v.begin() + 1 - v.size() << endl;
    }
}