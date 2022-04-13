#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x , y , fish , ansx , ansy , BIG = 999999999 ;
    int fishx , fishy , check;
    cin >> x >> y >> fish;

    for(int i = 0 ; i < fish ; i++){
        cin >> fishx>> fishy;
        check = (fishx- x)*(fishx - x) + (fishy - y)*(fishy - y);
        if(check < BIG){
            BIG = check;
            ansx = fishx;
            ansy = fishy;
        }
    }
    cout << ansx << " " << ansy;
}