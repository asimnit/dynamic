#include <bits/stdc++.h>
using namespace std;
vector<unsigned long> cat;
void initialize(int n)
{
    cat = vector<unsigned long>(n+1, -1);
    cat[0] = 1;
    cat[1] = 1;
}

unsigned long catalon(int n)
{
    if(cat[n] != -1)
    return cat[n];
    int i;
    cat[n] = 0;
    for(i = 0; i < n; i++)
    {
        cat[n] += catalon(i)*catalon(n-1-i);
    }
    return cat[n];
}
int main() {
	//code
	int T;
	cin>>T;
	int i;
	for(i = 0; i < T; i++)
	{
	    int n;
	    cin>>n;
	    initialize(n);
	    cout<<catalon(n)<<endl;
	}
	return 0;
}
