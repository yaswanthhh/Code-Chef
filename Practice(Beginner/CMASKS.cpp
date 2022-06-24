#include <iostream>
using namespace std;

int main() {
	int T, x, y;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> x >> y;
	    if(x*100 == y * 10)
	        cout << "CLOTH" << endl;
	    else if(x*100 < y*10)
	        cout << "DISPOSABLE" << endl;
	    else
	        cout << "CLOTH" << endl;
	}
	return 0;
}
