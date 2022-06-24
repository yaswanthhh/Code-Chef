#include <iostream>
using namespace std;

int main() {
	int T, a, b;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> a >> b;
	    if(a > b) 
	        cout << 7-a <<endl;
	    else
	        cout << 7-b <<endl;
	}
	return 0;
}
