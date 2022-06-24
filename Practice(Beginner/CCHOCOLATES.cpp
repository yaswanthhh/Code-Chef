#include <math.h>
#include <iostream>
using namespace std;

int main() {
	int T, x, y, z;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> x >> y >> z;
	    int t = x*5 + y*10;
	    cout << floor(t/z) << endl;
	}
	return 0;
}
