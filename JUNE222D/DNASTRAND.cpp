#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int T, n;
	char dna[100];
	cin >> T;
	while(T--) {
	    char res[100] = "";
	    cin >> n;
	    cin >> dna;
	    for(int j=0; dna[j]!='\0'; j++) {
	        if(dna[j] == 'A') {
	            res[j] ='T';
	        }
	        else if(dna[j] == 'T') {
	            res[j] = 'A';
	        }
	        else if(dna[j] == 'C') {
	            res[j] = 'G';
	        }
	        else {
	            res[j] = 'C';
	        }
	    }
	    cout << res << endl;
	}
	return 0;
}
