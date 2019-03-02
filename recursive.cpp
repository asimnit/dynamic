#include <iostream>
using namespace std;
int catalon(int n)
{
    if(n <= 1)
    return 1;
    int res = 0;
    int i;
    for(i = 0; i < n; i++)
    res += catalon(i)*catalon(n-1-i);
    return res;
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
	    cout<<catalon(n)<<endl;
	}
	return 0;
}
