#include <iostream>
#include <string>
#include <vector>
using namespace std;

int count_correct(vector<int>& shell, int a, int b, int g) {
    int num_correct = 0;
    int temp;
    temp = shell[a - 1];
    shell[a - 1] = shell[b - 1];
    shell[b - 1] = temp;

    if (shell[g-1] == 1) {
        num_correct += 1;
    }

    return num_correct;
}

int main() {
    int num_swaps;
    int a, b, g;
    vector<int> case1 = {0, 0, 1};
    vector<int> case2 = {0, 1, 0};
    vector<int> case3 = {1, 0, 0};
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    cin >> num_swaps;
    int max_correct = 0, c1 = 0, c2 = 0, c3 = 0;

    for (int i = 0; i < num_swaps; i++) {
        cin >> a >> b >> g;
         c1 += count_correct(case1, a, b, g);
        c2 += count_correct(case2, a, b, g);
        c3 += count_correct(case3, a, b, g);
        max_correct = max(max(c1,c2), c3);

    }
    cout << max_correct;
    return 0;
}