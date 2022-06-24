#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int T, x, y;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> x >> y;
	    cout << abs(x-y) << endl;
	}
	return 0;
}
