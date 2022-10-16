#include <bits/stdc++.h>

using namespace std;
// sinh nhị phân
void binary(int a[], int n, int &check)
{
    int i = n;
    while(a[i] == 1 && i >= 1) a[i] = 0,i--;
    if(i == 0 ) check = 1;
    else{
        a[i] = 1;
    }
}
// tổ hợp
void com(int a[], int n, int k, int &check)
{
    int i = k;// 1 3 4, ,,,, 4 5 ..... 3 4... 1 2 5
    while(i >= 1 && a[i] == n - k + i) i--;
    if(i == 0)
        check = 1;
    else
    {
        a[i]++;
        for(int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
    }

}
// hoán vị
void permutation(int a[], int n, int &check)
{
    int i = n - 1;
    while(a[i] > a[i + 1] && i >= 1) i--;
    if(i == 0) check = 1;
    else
    {
        int k = n;
        while(a[i] > a[k]) k--;
        swap(a[i], a[k]);
        int l = i+ 1, r = n;
        while(l  < r)
        {
            swap(a[l], a[r]);
            l++, r--;
        }
    }
    // hoặc dùng hàm: 
    //prev_permutation(a, a + n); hoán vị
    //next_permutation(a,a + n);
}
// sinh phân hoạch
void partition(int a[], int n, int &cnt, int &check)
{
    int i = cnt;

    while(i >= 1 && a[i] == 1) i--;
    if(i == 0)
    {
        check = 1;
    }
    else{
        a[i]--;
        int d = cnt - i + 1;
        cnt = i;
        int q = d /a[i];
        int r = d % a[i];
        for(int j = 1; j <= q; j++) a[++cnt] = a[i];
        if(r) a[++cnt] = r;
        
    }
}
int main()
{
    int n, k, check = 0, cnt = 1;
    cin >> n >> k; 
    int a[n];
    for(int i = 1; i <= n; i++)
         a[i] = i ;
    //a[1] = n;
    while(check == 0)
    {
        for(int i = 1; i <= k; i++)
            cout << a[i] << " " ;
        com(a, n, k,check);
        cout << endl;
    }

}
