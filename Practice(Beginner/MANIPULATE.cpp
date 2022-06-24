#include <iostream>
using namespace std;

int main() {
	int T, x, y;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> x >> y;
	    if(x >= y)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
