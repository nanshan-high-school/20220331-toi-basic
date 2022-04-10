#include <iostream>
using namespace std;

int main() {
    int X, R, V, N;
    cin >> X >> R >> V;
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        int P, S;
        cin >> P >> S;
        
        int l, r;
        l = X - R;
        r = X + R;
        
        if (((P >= l) && (P <= r)) && S <= V) {
            X = P;
        } else if (((P >= l) && (P <= r)) && S > V) {
            if ((P = X) || (P <= r)) {
                X = X - 15;
            } else if (P < l){
                X = X + 15;
            }else {
                X = X;
            }
        }
    }
    cout << X;
}