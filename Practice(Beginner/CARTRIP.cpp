#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T) {
        int kms;
        cin >> kms;
        if(kms <= 300)
            cout << "3000" << endl;
        else
            cout << kms*10 << endl;
        T--;
    }
	return 0;
}
