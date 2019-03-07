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
