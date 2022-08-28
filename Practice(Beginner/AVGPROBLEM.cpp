#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T) {
	    int a, b, c;
	    cin >> a >> b >> c;
	    if((a+b)/2.0>c)
	        cout << "YES" <<endl;
	    else
	        cout << "NO" <<endl;
	   T--;
	}
	return 0;
}
