#include <bits/stdc++.h>
#include <sstream>
using namespace std;
void chuanhoa(string &s)
{
    if(s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;
    for(int i = 1; i < s.length(); i++)
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
}
int main()
{
    std::string s;
    getline(cin, s);
    stringstream str(s);
    string tmp;
    std:: vector<std::string> v;
    int i = 0;
    while(str >> tmp)
    {
        v.push_back(tmp);
    }
    for(int i = 0; i < v[v.size() - 1].length(); i++)
        if(v[v.size() - 1][i] >= 'a' && v[v.size() - 1][i] <= 'z') v[v.size() - 1][i] -= 32;
    for(int i = 0; i < v.size() - 1; i++)
        {
            chuanhoa(v[i]);
        }
    cout << v[0];
    for(int i = 1; i < v.size() - 1; i++)
        cout << " " << v[i];
    cout << ", " << v[v.size() - 1];
    

}