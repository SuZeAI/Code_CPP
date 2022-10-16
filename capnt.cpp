#include <bits/stdc++.h>
using namespace std;
int snt(int n)
{
    if (n == 1) return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if(n % i == 0) return 0;
    return 1;
}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; 
        int a[10005] = {0};
        a[0] = 1;
        a[1] = 1;
        for (int i = 2; i <=sqrt(n); i++)
            if(a[i] == 0)
            {
                for(int j = i * i ; j < n; j += i)
                {
                    a[j] = 1;
                }
            }
        for (int i = n - 2; i > 0; i--)
            if (a[i] == 0 && snt(n - i) == 1)
                {
                    cout << n - i << " " << i << endl;
                    break;
                }
    }
}