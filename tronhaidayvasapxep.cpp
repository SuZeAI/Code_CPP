#include <bits/stdc++.h>

using namespace std;
void input(int n, vector<int> &v)
{
    int tmp;
    for(int i =0; i< n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
}
bool cmp(const int a, const int b)
{
    return a < b;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {int n, m;
    cin >> n >> m;
    vector<int> v;
    input(n, v), input(m, v);
    sort(v.begin(), v.end(), cmp);
    for(int i  = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;}
}