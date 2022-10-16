#include <bits/stdc++.h>
using namespace std;

int wishMin(int n)
{
    for(int i = 2; i <=sqrt(n); i++)
        if (n % i == 0) return i;
    return n;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << "1 ";
        for (int i = 2; i <= n; i++)
            cout << wishMin(i) << " ";
        cout <<endl;
    }
}