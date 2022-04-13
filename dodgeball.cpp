#include <iostream>
using namespace std;

int main() {
    int ip , catchla , speed , times , ballip , speed1;
    cin >> ip >> catchla >> speed;
    cin >> times;
    for(int i = 0 ; i < times ; i++){
        cin >> ballip >> speed1;
        if(speed1 > speed){
            if(ballip >= ip){
                ip -= 15;
            }else{
                ip += 15;
            }
        }else{
            ip = ballip;
        }
    }
    cout << ip;
}