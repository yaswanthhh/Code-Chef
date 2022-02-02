#include <iostream>
using namespace std;

int main() 
{
	int t, n;
	cin>>t;
	int a[t], res[t] = {0};
	for(int i=0; i<t; ++i)
	{
	   cin>>n;
	   while(n>0)
	   {
	       int t;
	       t = n%10;
	       if(t==4)
	       {
	           res[i] += 1;
	       }
	       n /= 10;
	   }
	}
	
	for(int i=0; i<t; ++i)
	{
	    cout<<res[i]<<endl;
	}
	return 0;
}
