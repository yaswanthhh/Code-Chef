#include <iostream>
using namespace std;

int main() {
    int T, n, m, k;
    cin >> T;
    for(int i=0; i<T; ++i) {
        cin >> n >> m >> k;
        if(n <= m*k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
