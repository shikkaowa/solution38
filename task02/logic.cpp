#include "logic.h"
void fync(int n, int m) {

    int start = m - (1 - (m & 1));

    for (int i = start; i >= n; i -= 2) {
        cout << i << " ";
    }
    cout << endl;
}
