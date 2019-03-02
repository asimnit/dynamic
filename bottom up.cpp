#include <bits/stdc++.h>
using namespace std;
unsigned long catalon(int n)
{
    vector<unsigned long> cat(n+1);
    cat[0] = 1;
    cat[1] = 1;
    int i, j;
    for(i = 2; i <= n; i++)
    {
        cat[i] = 0;
        for(j = 0; j < i; j++)
        cat[i] += cat[j]*cat[i-1-j];
    }
    return cat[n];
}
int main()
 {
	//code
	int T;
	cin>>T;
	int i;
	for(i = 0; i < T; i++)
	{
	    int n;
	    cin>>n;
	    cout<<catalon(n)<<endl;
	}
	return 0;
}

