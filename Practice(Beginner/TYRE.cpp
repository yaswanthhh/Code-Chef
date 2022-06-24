#include <iostream>
using namespace std;

int main() {
	int T, n, m;
	cin >> T;
	for(int i=0; i<T; ++i) {
	    cin >> n >> m;
	    cout << n*2 + m*4 << endl;
	}
	return 0;
}
