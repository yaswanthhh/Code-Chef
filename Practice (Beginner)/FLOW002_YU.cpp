#include <iostream> 
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while (t--) 
	{
		int a, b;
		cin>>a>>b;
		int ans = a % b;
		printf("%d\n", ans);
	}

	return 0;
}
