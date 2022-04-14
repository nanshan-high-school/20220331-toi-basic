#include <iostream>
#include<cmath>
using namespace std;
int main() {
  int place[2];
  int fish[2];
  int closefish[2];closefish[0]=9999;closefish[1]=9999;
  int num,a,b;
  cin>>place[0];
  cin>>place[1];
  cin>>num;
  while(num>0){  
    cin>>fish[0];
    cin>>fish[1];
    a=(fish[1]-place[1])*(fish[1]-place[1])
      +(fish[0]-place[0])*(fish[0]-place[0]);
    b=(closefish[1]-place[1])*(closefish[1]-place[1])
      +(closefish[0]-place[0])*(closefish[0]-place[0]);
    if(a<b){
      closefish[0]=fish[0];
      closefish[1]=fish[1];
    } 
    num=num-1;
  }
  cout<<closefish[0]<<" ";
  cout<<closefish[1];
}