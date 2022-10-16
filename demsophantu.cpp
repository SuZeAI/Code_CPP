#include <bits/stdc++.h>
using namespace std;
// int check(int tmp, int n , int a[])
// {
//     int count = 0;
//     for (int i = 0 ; i < n; i++)
//         {
//             if(tmp == a[i] ) count ++;
//             if(count > 1) return 1;
//         }
//     return 0;
// }
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a[105], Count = 0;
        set<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
            {
                cin >> a[i];
                v.insert(a[i]);
            }
        for(auto i : v)
        {
            if(count(a, a + n, i) > 1) Count += count(a, a + n, i);
        }
        // for (int i = 0; i < n; i++)
        // {
        //     // if(check(a[i], n, a) == 1) count++;
        // }
        cout << Count << endl;
    }
}