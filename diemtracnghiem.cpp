#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string de1, de2;
        de1 = "ABBADCCABDCCABD";
        de2 = "ACCABCDDBBCDDBB";
        string dapan;
        getline(cin, dapan);
        double diem = 0;
        if ( dapan[0] == '1' && dapan[1] == '0' && dapan[2] == '1')
            {
                for (int i = 0; i < de1.length(); i++)
                {
                    if (dapan[i * 2 + 4] == de1[i]) 
                            diem += (float)2/3;
                }
            }
        else 
        {
            for (int i = 0; i < de2.length(); i++)
                {
                    if (dapan[i * 2 + 4 ] == de2[i]) 
                        diem += (float)2/3;
                }

        }
        cout << setprecision(2) << fixed << diem << endl;
    }
    
}