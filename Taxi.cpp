#include <iostream>
using namespace std;

int main() {
    int km , waste , on , off , money = 20;
    int extra[5] = {185 , 195 , 205 , 215 , 225};
    cin >> km >> waste >> on >> off;
    if(km <= 2){
        money += waste / 2 * 5;
    }else if(km > 2){
        money += waste / 2 * 5 + (km - 2) * 5;
    }
    if(off >= 19){
        off -= 18;
        on -= 18;
        if(on < 0){
            on = 0;
        }
        for(int i = on ; i < off ; i++){
            money += extra[i];
        }
    }
    cout << money;
}