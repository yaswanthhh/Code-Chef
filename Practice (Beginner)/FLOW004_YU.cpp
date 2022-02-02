#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin>>t;
	int s[t];
	
	for(int i=0; i<t; ++i)
	{
	    s[i] = 0;	
	    cin>>n;
	    int temp = n, ctr = 0;
	    while(temp > 0)
	    {
	        ctr += 1;
	        temp /= 10;
	    }
	    for(int j=0; j<ctr; ++j)
	    {
	        if(j==0)
	        {
	            s[i] += n%10;
	        }
	        if(j==ctr - 1)
	        {
	            s[i] += n;
	        }
	        
	        n /= 10;
	    }
	}
	
	for(int i=0; i<t; ++i)
	{
	    cout<<s[i]<<endl;
	}
	
	return 0;
}
