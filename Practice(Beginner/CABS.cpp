#include <iostream>
using namespace std;

int main() {
	int T, x, y;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> x >> y;
	    if(x > y)
	        cout << "SECOND" << endl;
	    else if(y > x)
	        cout << "FIRST" <<endl;
	    else
	        cout << "ANY" <<endl;
	}
	return 0;
}
