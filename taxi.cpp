#include <iostream>
using namespace std; 

int main() {
    int k, w, s, e;
    cin >> k >> w >> s >> e;
    int money = 20;
    if (k > 2) {
        money += (k - 2) * 5;
    }
    money += (w / 2) * 5;
    if (e > 18) {
        money += 185;
        if (e > 19) {
            money += 195;
            if (e > 20) {
                money += 205;
                if (e > 21) {
                    money += 215;
                    if (e > 22) {
                        money += 225;
                    }
                }
            }
        }
    }
    if (s > 18) {
        money -= 185;
        if (s > 19) {
            money -= 195;
            if (s > 20) {
                money -= 205;
                if (s > 21) {
                    money -= 215;
                    if (s > 22) {
                        money -= 225;
                    }
                }
            }
        }
    }
    cout << money;
}
