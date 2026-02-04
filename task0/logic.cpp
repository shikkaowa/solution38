#include "logic.h"
void fync(int n, int m) {


	if (n < m) {
		// возрастания
		for (int i = n; i <= m; i++ ) {
			cout << i << " ";
		}
	}
	if (n > m) {
		// убывания
		for (int i = n; i <= m; i--) {
			cout << i << " ";
		}
	}
	
	cout << endl;
}
