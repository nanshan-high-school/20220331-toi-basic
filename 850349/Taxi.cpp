#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int K = 0, W = 0,S = 0, E = 0;
  int m = 20;
  int mm(int, int);
  
  cin >> K >> W >> S >> E ; 
  
  if(K <= 2){
    m += 5 * (W/2) + mm(S, E);
    cout << m;
  }else{
    m += (K - 2) * 5 + mm(S, E) + 5 * (W/2);
    cout << m;
  }
		}

int mm(int a,int b){
  int mmm = 0;
  int t1, t2, t3;
  if((a <= 18 && a >= 7) && (b <= 23 && b > 18)){
    if(b == 19){
      t3 = 185;
    }else if(b == 20){
      t3 = 185 + 195;
    }else if(b == 21){
      t3 = 185 + 195 + 205;
    }else if(b == 22){
      t3 = 185 + 195 + 205 +215;
    }else if(b == 23){
      t3 = 185 + 195 + 205 + 215 + 225;
    }else{
      t3 = 0;
    }
    return t3;
  }else{
    if(a == 18){
      t1 = 185;
    }else if(a == 19){
      t1 = 195;
    }else if(a == 20){
      t1 = 205;
    }else if(a == 21){
      t1 = 215;
    }else if(a == 22){
      t1 = 225;
    }else{
      t1 = 0;
    }

    if(b == 19){
      t2 = 185;
    }else if(b == 20){
      t2 = 195;
    }else if(b == 21){
      t2 = 205;
    }else if(b == 22){
      t2 = 215;
    }else if(b == 23){
      t2 = 225;
    }else{
      t2 = 0;
    }

    int n = 0, total = 0;
    if(a < 18){
      for(int i = 17; i <= a; i--){
        int s = 0;
        s += 1;
        if(a == i){
          n = b - a - s;
        }
      }
    }else{
      n = b - a;
    }
    total = (t1 + t2) * n / 2;
    return total;
  }
}