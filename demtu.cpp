#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while(t--)
    {
        string s;
        getline(cin, s);
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
            {
                while(s[i] == '\t' || s[i] == '\n' || s[i] == ' ')
                {
                    i++;
                }
                i--;
            }
            else{
                while(s[i] != '\t' && s[i] != '\n' && s[i] != ' ' && s[i] != '\0')
                {
                    i++;
                }
                count++;
                i--;
            }
        }  
        cout << count << endl;  
    }
}