#include <bits/stdc++.h>

using namespace std;
void abc();
void efg();
// void input(vector<int> &v)
// {
//     int t;
//     while(true)
//     {
//         cin >> t;
//         cout << t;
//         if(cin) break;
//         v.push_back(t);
//     }
//     return;
// }
void  abc()

{
    efg();
}

void efg()
{
    cout << "tuyen";
}
int main()
{
    int t;
    vector<vector<int>> v(4, {1, 3, 4, 7});   
    // input(v);
    /*char c = 'a';
    while(c != '\n')
        {
            v.push_back(5);
            c = getchar();
        }*/
        abc();
   for(int i = 0; i < v.size(); i++)
    cout << v[i][i] << " ";
}