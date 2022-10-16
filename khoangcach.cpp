#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double xa, ya, xb, yb;
        cin >> xa >> ya >> xb >> yb;
        double kc = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
        cout << setprecision(4) << fixed << kc << endl; 
    }
    return 0;
}