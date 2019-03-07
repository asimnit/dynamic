#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> S, int n, int sum)
{
	bool table[2][sum + 1];
	int i, j;
	for(i = 0; i <= n; i++)
	{
		for(j = 0; j <= sum; j++)
		{
			if(j == 0)
			table[i % 2][j] = true;
			else if(i == 0)
			table[i % 2][j] = false;
			else if(S[i-1] > j)
			table[i%2][j] = table[(i + 1)%2][j];
			else
			table[i%2][j] = table[(i +1)%2][j] || table[(i +1)%2][j - S[i-1]];
		}
	}
	return table[n%2][sum];
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
