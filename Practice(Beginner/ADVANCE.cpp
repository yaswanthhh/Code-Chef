#include <iostream>
using namespace std;

int main() {
	int T, x, y;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> x >> y;
	    if(y-x <= 200 && y-x >= 0)
	        cout << "YES" << endl;
	    else
	        cout << "NO" <<endl;
	}
	return 0;
}
