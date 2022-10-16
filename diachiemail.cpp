#include <bits/stdc++.h>
#include <sstream>
using namespace std;
void toUpper(string & s)
{
    for(int i = 0; i < s.length(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
}
int main()
{
    string s, tmp;
    getline(cin, s);
    stringstream str(s);
    std::vector<string> v;
    while(str >> tmp)
    {
        v.push_back(tmp);
    }
    for(int i = 0 ; i < v.size(); i++)
        toUpper(v[i]);
    cout << v[v.size() - 1];
    for(int i = 0; i < v.size() - 1; i++)
        cout << v[i][0];
    cout << "@ptit.edu.vn";
}