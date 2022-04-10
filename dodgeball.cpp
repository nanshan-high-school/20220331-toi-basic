#include <iostream>
using namespace std;

int main() {
    int x, r, v;
    cin >> x >> r >> v;
    int n;
    cin >> n;
    int p[n], s[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i] >> s[i];
    }
    for (int i = 0; i < n; i++) {
    int catchrange[2] = {x - r, x + r};
        if (p[i] > catchrange[0] && p[i] < catchrange[1]) {
            if (s[i] < v) {
                x = p[i];
            }
            if (s[i] > v) {
                if (p[i] < x) {
                    x += 15;
                } else if (p[i] >= x) {
                    x -= 15;
                }
            }
        }
    }
    cout << x;
}
