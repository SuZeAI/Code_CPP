#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tmp;
    cin >> n;
    set<int> arr;
    for (int i = 0; i < n; i++)
        cin >> tmp, arr.insert(tmp);
    for(auto i : arr)
        cout << i << " ";
    
}