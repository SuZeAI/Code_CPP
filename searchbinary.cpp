#include <bits/stdc++.h>

using namespace std;
int idex_binary(int m,int n, int k , int a[])
{
    if(m < n)
    {
        int mid = (m + n)/ 2;
        if(a[mid] == k) return mid;
        else if(a[mid] < k) return idex_binary(mid + 1, n, k, a);
        else 
        {
            return idex_binary(m, mid - 1, k, a);
        }
    }
}

int index_binary(int m , int n, int k, int a[])
{
    int idx;
    while(n - m > 1)
    {
        int mid = (m + n) / 2;
        if(a[mid] == k) return mid;
        else if(a[mid] < k)
        {
            m = mid + 1;
        }
        else 
            n = mid - 1;

    }
    return -1;
}

int main()
{
    // tiếm kiếm tuyến tính
    // tìm kiếm nhị phân 
    // tìm kiếm jung nâng cao tuyến tính lên
    // tìm kiếm nội suy nâng cao tìm kiếm nhị phân
    // tìm kiếm cấp số nhân tìm kiểu 1 pt đầu rồi 2 phẩn tủ r 4 phần tử r đóng khoảng vào
    
    int n, k;
    cin >> n >> k;
    int a[100];
    for(int i = 0;i < n; i++)
        cin >> a[i];
    cout << index_binary(0, n, k, a) + 1;
}