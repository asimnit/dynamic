#include <bits/stdc++.h>
using namespace std;
int getways(int n)
{
    vector<int> dp(n + 1);
    int i;
    for(i =0; i <= 2; i++)
    dp[i] = i;
    for(i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + (i - 1)*dp[i - 2];
    }
    return dp[n];
}
int main() {
	//code
	int n; 
	cin>>n;
	cout<<getways(n);
	return 0;
}
