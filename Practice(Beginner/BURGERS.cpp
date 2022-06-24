#include <iostream>
using namespace std;

int main() {
	int T, b, p;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> b >> p;
	    if(b > p)
	        cout << p << endl;
	    else
	        cout << b <<endl;
	}
	return 0;
}
