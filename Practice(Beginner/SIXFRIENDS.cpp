#include <iostream>
using namespace std;

int main() {
	int T, x, y;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    int d, t;
	    cin >> x >> y;
	    d = x * 3;
	    t = y * 2;
	    if(d > t) {
	        cout << t << endl;
	    } 
	    else
	        cout << d << endl;
	}
	return 0;
}
