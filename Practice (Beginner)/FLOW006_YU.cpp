#include <iostream>
using namespace std;

int main() {
	int t, a;
	cin>>t;
	int s[t];
	
	for(int i=0; i<t; ++i)
	{
	    s[i] = 0;
	    cin>>a;
	    while(a>0)
	    {
	        s[i] += a%10;
	        a /= 10;
	    }
	}
	
	for(int i=0; i<t; ++i)
	{
	    cout<<s[i]<<endl;
	}
	
	return 0;
}
