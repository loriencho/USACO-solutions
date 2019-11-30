#include <iostream>
#include <string>

using namespace std;
int main() {
    int b1, b2, b3;
    int c1, c2, c3;
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    cin >> c1 >> b1 >> c2 >> b2 >> c3 >> b3;
    for (int i = 0; i < 33; i++) {
        int amt = min(b1, c2 - b2);
        b1 -= amt;
        b2 += amt;

        amt = min(b2, c3 - b3);
        b2 -= amt;
        b3 += amt;

        amt = min(b3, c1 - b1);
        b3 -= amt;
        b1 += amt;
    }

    int amt = min(b1, c2 - b2);
    b1 -= amt;
    b2 += amt;

    cout<<b1<<endl<<b2<<endl<<b3<<endl;
    return 0;
}