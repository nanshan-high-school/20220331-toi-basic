#include <iostream>
using namespace std;
int main() {
  int X, R, V;
  cin >> X >> R >> V;
  int N;
  cin >> N;
  
  for(int i = 0; i < N; i++){
    int P, S;
    cin >> P >> S;
    
    if (X-R <= P && P <= X+R){
      if (S <= V){
        X = P;
      }else{
        if (X <= P){
          X -= 15;
        }else{
          X += 15;
        }
      }
    }else{
      continue;
    }
  }

  cout << X;
}