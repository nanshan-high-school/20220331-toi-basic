#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int fisher[2];
    for (int i = 0; i < 2; i++) {
        cin >> fisher[i];
    }
    int n;
    cin >> n;
    int fishes[2][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> fishes[j][i];
        }
    }
    int identify[n];
    int min_i = 999999999;
    int min;
    for (int i = 0; i < n; i++) {
        identify[i] = pow(fisher[0] - fishes[0][i] , 2) + pow(fisher[1] - fishes[1][i] , 2);
        
    }
    for (int i = 0; i < n; i++) {
        if (identify[i] < min_i) {
            min_i = identify[i];
            min = i;
        }
    }
    for (int i = 0; i < 2; i++) {
        cout << fishes[i][min] << " ";
    }
}
