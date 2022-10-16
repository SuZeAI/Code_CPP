#include<iostream>
#include<algorithm>
#include<cstring>
#include <vector>
using namespace std;

int b[100000];
int dp[100000][2];
void pascal(vector<int> v[], int i, int n)
{
	int i = 2;
	vector<int> v[100];
	v[0] = {1};
	v[1] = {1, 1};
	if(n < 2) return ;
	v[i].push_back(1);
	for(int j = 0; j < i - 1; j++)
		v[i].push_back(v[i - 1][j] + v[i - 1][j + 1]);
	v[i].push_back(1);
	if(i <= n) return;
	return pascal(v, i + 1, n);
	
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		memset(dp, 0, sizeof(dp));
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> b[i];
		for (int i = 1; i < n; i++)
		{
			dp[i][0] = max(dp[i - 1][0], dp[i - 1][1] + abs(b[i - 1] - 1));
			dp[i][1] = max(dp[i - 1][0] + abs(b[i] - 1), dp[i - 1][1]);
		}
		cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;
	}
	return 0; 
}