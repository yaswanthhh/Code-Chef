#include <iostream>
using namespace std;

int main() {
	int T, x, n;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> x >> n;
	    cout << n * (x/10) << endl;
	}
	return 0;
}
