#include <bits/stdc++.h>
using namespace std;
vector<int> dp;
void initialize(int n)
{
	dp = vector<int>((n+1), -1);
	int i;
	for(i = 0; i <= 2; i++)
	dp[i] = i;
}
int getways(int n)
{
   if(dp[n] != -1)
   return dp[n];
   dp[n] = getways(n - 1) + (n - 1)*getways(n - 2);
   return dp[n];
}
int main() {
	//code
	int n; 
	cout<<"Enter the number of friends: ";
	cin>>n;
	initialize(n);
	cout<<"\nThe number of ways they can reamin single or remain paired is: "<<getways(n);
	return 0;
}
