#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	int res[t] = {0};
	
	for(int i=0; i<t; ++i)
	{
	    cin>>n;
	    while(n>0)
	    {
	        int t;
	        t = n%10;
	        res[i] *= 10;
	        res[i] += t;
	        n /= 10;
	    }
	}
	
	for(int i=0; i<t; ++i)
	{
	    cout<<res[i]<<endl;
	}
	return 0;
}
