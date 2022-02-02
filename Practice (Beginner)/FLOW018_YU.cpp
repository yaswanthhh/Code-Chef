#include <iostream>
using namespace std;

int main() {
	
	int t, n;
	cin>>t;
	int res[t];
	
	for(int i=0; i<t; ++i)
	{
	    cin>>n;
	    int temp;
	    temp = n-1;
	    
	    if(n == 0)
	    {
	        res[i] = 1;
	    }
	    
	    else
	    {
	        while(temp > 0)
	        {
	            n *= temp;
	            temp-=1;
	        }
	        res[i] = n;
	    }
	}
	
	for(int i=0; i<t; ++i)
	{
	    cout<<res[i]<<endl;
	}
	
	return 0;
}
