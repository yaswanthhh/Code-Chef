#include <iostream>
using namespace std;

int main() 
{
	int t, n, s=0;
	cin>>t;
	int a[1000001] = {0};
	
	while(t--)
	{
	    cin>>n;
	    a[n] ++;
	}
	for(int i=0; i<1000001; ++i)
	{
	    while(a[i] > 0)
	    {
	        cout<<i<<endl;
	        a[i]--;
	    }
	}
}
