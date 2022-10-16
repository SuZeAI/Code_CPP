#include <bits/stdc++.h>

using namespace std;
void input(int n, int a[])
{
    for(int i = 0; i < n; i++)
        cin >> a[i];
}

int knap_0_1(int n, int w, int wt[], int val[])
{
    if(n == 0 || w == 0) return 0;

    if(wt[n - 1] > w)
    {
        knap_0_1(n - 1, w, wt, val);
    }
    else
        return max(val[n - 1] + knap_0_1(n - 1, w - wt[n - 1], wt, val), knap_0_1(n - 1, w , wt, val));
}
int main()
{
    int n, w;
    cin >> n >> w;
    int wt[n], val[n];
    input(n, wt);
    input(n, val);
    cout << knap_0_1(n, w, wt, val);
}