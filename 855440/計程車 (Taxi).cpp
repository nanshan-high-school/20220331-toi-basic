#include <iostream>
using namespace std;

int main() {
	int K, W, S, E, total = 0;
	cin >> K >> W >> S >> E; 
	if (K < 2) {
        total += 20;
    } else {
        total += 20 + (K - 2) * 5;
    }
    if (W >= 2) {
        total += (W / 2) * 5;
    }
    if((S-18) <= 0){
        if (E == 19) {
            total += 185;
        } else if (E == 20) {
            total += 380;
        } else if(E == 21) {
            total += 585;
        } else if (E == 22) {
            total += 800;
        } else if(E == 23) {
            total += 1025;
        }
    } else if (S == 19) {
        if (E == 20) {
            total += 195;
        } else if (E == 21) {
            total += 400;
        } else if (E == 22) {
            total += 615;
        } else if(E == 23) {
            total += 840;
        }
    } else if (S == 20) {
        if (E == 21) {
            total += 205;
        } else if (E == 22) {
            total += 420;
        } else if (E == 23) {
            total += 645;
        }
    } else if (S == 21) {
        if (E == 22) {
            total += 215;
        } else if (E == 23) {
            total += 400;
        }
    } else {
        total += 225;
    }
    cout << total;
}