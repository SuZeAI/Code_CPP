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
        vector<long long> v, v1;
        long long tmp;
        for(long long i = 0; i < n; i++)
        {
            cin >> tmp;
            if(tmp != 0) v.push_back(tmp);
            else v1.push_back(0);
        }
        for(long long i = 0; i < v.size(); i++)
            cout << v[i] << " ";
        for(long long i = 0; i < v1.size(); i++)
            cout << "0 ";
        cout << endl;
    }
}