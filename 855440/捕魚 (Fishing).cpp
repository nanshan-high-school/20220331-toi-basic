#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int x, y, n, ai, s_ai, bi, s_bi;
    int d, s_d;
    s_d = 9999;
    cin >> x >> y >> n;
    for (int i = 0; i < n; i++) {
        cin >> ai;
        cin >> bi;
        d = pow((x-ai), 2) + pow((y-bi), 2);
        cout << d << "\n";
        if (d < s_d) {
            s_d = d;
            s_ai = ai;
            s_bi = bi;
        }
    }
    cout << s_ai << " " << s_bi;
}