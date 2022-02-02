#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	int res[t];
	
	for(int i=0; i<t; ++i)
	{
	    cin>>n;
	    res[i] = floor(sqrt(n));
	}
	
	for(int i=0; i<t; ++i)
	{
	    cout<<res[i]<<endl;
	}
	return 0;
}
