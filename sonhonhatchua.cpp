#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n, check = 0;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int j = 1;
        while(1)
        {
            int count = 0;
            for(int i = 0; i < n; i++)
            {
                if(j == a[i]){
                    count = 1;
                    break;
                }

            }
            if(count == 0)
            {
                cout << j << endl;
                break;
            }
            else j++;
        }
    }
    return 0;
}