#include <iostream>
using namespace std;

#include "bigint.h"
using namespace Dodecahedron;


int main() {
    Bigint bigint("1024");
    cout << bigint << endl;
    bigint = bigint / Bigint(2);
    cout << bigint << endl;
    bigint /= Bigint(2);
    cout << bigint << endl;
    bigint = bigint / (long long) (2);
    cout << bigint << endl;
    bigint = bigint / 2;
    cout << bigint << endl;
    return 0;
}