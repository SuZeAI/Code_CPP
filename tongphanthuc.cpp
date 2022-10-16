#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    double sum = 0;
    for (int i = 1; i <= t; i++)
    {
        sum += (float)1/i;
    }
    cout << setprecision(4) << fixed << sum;
}