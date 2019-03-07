#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> S, int n, int sum)
{
	if(sum == 0)
	return true;
	if(sum != 0 && n == 0)
	return false;
	if(S[n-1] > sum)
	return check(S, n - 1, sum);
	return (check(S, n -1, sum) || check(S, n - 1, sum-S[n - 1]));
}
int total(vector<int> S)
{
	int i;
	int res = S[0];
	for(i = 1; i < S.size(); i++)
	{
		res += S[i];
	}
	return res;
}
bool check_divisible(vector<int> S, int n, int m)
{
	if(n > m)
	return true;
	int sum = 1;
	while(sum <= total(S))
	{
		sum = sum*m;
		if(check(S, n, sum))
		return true;
	}
	return false;
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
	cout<<"\nEnter the dividor: ";
	cin>>sum;
	if(check_divisible(S, n, sum) == true)
	cout<<"\nFound a subset of the divisble sum.";
	else
	cout<<"\nNo subset of the divisible sum.";
	return 0;
}
