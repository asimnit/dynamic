#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> S, int n, int sum)
{
	bool table[n + 1][sum + 1];
	int i, j;
	for(j = 0; j <= n; j++)
	table[j][0] = true;
	for(j = 1; i <= sum; j++)
	table[0][j] = false;
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= sum; j++)
		{
			if(S[i-1] > j)
			table[i][j] = table[i-1][j];
			else
			table[i][j] = table[i - 1][j] || table[i][j - S[i-1]];
		}
	}
	return table[n][sum];
}
int main()
{
	int n;
	cout<<"Enter the number of elements in the set: ";
	cin>>n;
	vector<int> S(n);
	cout<<"\nEnter "<<n<<" elements: ";
	int i;
	for(i = 0; i < n; i++)
	cin>>S[i];
	int sum;
	cout<<"\nEnter the sum: ";
	cin>>sum;
	if(check(S, n, sum) == true)
	cout<<"\nFound a subset of the given sum.";
	else
	cout<<"\nNo subset of the given sum.";
	return 0;
}
