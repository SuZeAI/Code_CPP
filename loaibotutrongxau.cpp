#include <bits/stdc++.h>
using namespace std;

int main()
{
    string  s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int idx = s1.rfind(s2);
    while(idx != -1)
    {
        s1.erase(idx, s2.length());
        idx = s1.rfind(s2);
    }
    cout << s1;
}