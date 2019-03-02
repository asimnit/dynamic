#include <bits/stdc++.h>
using namespace std;
int min(int x, int y, int z)
{
    if(x < y)
    {
        if(x < z)
        return x;
        else
        return z;
    }
    else
    {
        if(y < z)
        return y;
        else
        return z;
    }
}
int get_ugly_number(int no)
{
    int next_2 = 2;
    int next_3 = 3;
    int next_5 = 5;
    int i2 = 0, i3 = 0, i5 = 0;
    int i;
    vector<int> ugly;
    ugly.push_back(0);
    for(i = 0; i < no; i++)
    {
        int next_ugly = min(next_2, next_3, next_5);
        ugly.push_back(next_ugly);
        if(next_ugly == next_2)
        {
            i2 = i2 + 1;
            next_2 = ugly[i2] * 2;
        }
        if(next_ugly == next_3)
        {
            i3 = i3 + 1;
            next_3 = ugly[i3] * 3;
        }
        if(next_ugly == next_5)
        {
            i5 = i5 + 1;
            next_5 = ugly[i5] * 5;
        }
    }
    return ugly[no - 1];
}
int main() {
	//code
	int T;
	cin>>T;
	int i;
	for(i = 0; i < T; i++)
	{
	    int no;
	    cin>>no;
	    cout<<get_ugly_number(no)<<endl;
	}
	return 0;
}
