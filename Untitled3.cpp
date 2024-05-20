#include<bits/stdc++.h>
using namespace std;

class factorial {

public:
int fact(int n) {
        int i, f = 1;
        for (i = 1; i <= x; i++) {
            f = f*i;
        }
            return f;

        }
}
int main() {

    int n, f;

    cout << "Enter a number:";
    cin >> n;

    factorial obj;
    f = obj.fact(n);

    cout << "Factorial:" << f;

    return 0;
}
