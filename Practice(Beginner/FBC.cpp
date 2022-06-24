#include <iostream>
using namespace std;

int main() {
	int T, k, x;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> k >> x;
	    cout << k-x << endl;
	}
	return 0;
}
