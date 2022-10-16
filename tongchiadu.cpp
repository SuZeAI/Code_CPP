#include <bits/stdc++.h>

using namespace std;
int tong(int n )
{
    int sum = n * (n + 1) / 2;
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long z = n / k;

        long long sum = z * tong(k - 1) + tong(n % k);
        if (sum == k) 
            cout << "1";
        else 
            cout << "0";
        cout << endl;
    }
}