#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int a, b, c, diff, max=0, winner, temp, sc_1=0, sc_2=0;
    cin>>a;
    while(a--) 
    {
        cin>>b>>c;
        sc_1=sc_1+b;
        sc_2=sc_2+c;
        if(sc_1>sc_2) 
        {
            diff=sc_1-sc_2; temp=1;
        }
        else 
        {
            diff=sc_2-sc_1; temp=2;
        }
        if(diff>max) 
        {
            max=diff; winner=temp;
        }
    }
    cout<<winner<<" "<<max;
    
	return 0;
}
