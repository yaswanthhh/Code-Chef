#include <iostream>
using namespace std;

int main()
{
    int T, a, b;
    cin>>T;
    
    int s[T];
    
    for(int i=0; i<T; ++i)
    {
        cin>>a>>b;
        s[i] = a+b;
    }
    
    for(int i=0; i<T; ++i)
    {
        cout<<s[i]<<endl;
    }
    
    return 0;
}
