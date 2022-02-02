#include <iostream>
using namespace std;

int main() {
	int n, o = 0, e = 0;
	cin >> n;
	int A[n];
	for(int i=0; i<n; ++i) {
	    cin >> A[i];
	}
	
	for(int i=0; i<n; ++i) {
	    if(A[i] % 2 == 0)
	        e++;
	    else
	        o++;
	}
	
	if(e > o)
	    cout << "READY FOR BATTLE";
	else
	    cout << "NOT READY";
	return 0;
}
