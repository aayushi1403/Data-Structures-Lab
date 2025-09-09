#include<iostream>
#include<vector>
using namespace std;
struct time{
  int hour;
  int minutes;
  int seconds;
};
int main(){
  struct time t1={6,4,23};
  struct time t2={12,9,50};
  struct time t3;
  t3.seconds=t1.seconds+t2.seconds;
  t3.minutes=t1.minutes+t2.minutes+t3.seconds/60;
  t3.hour=t1.hour+t2.hour+t3.minutes/60;
  t3.seconds=t3.seconds%60;
  t3.minutes=t3.minutes%60;
  cout<<t3.hour<<" "<<t3.minutes<<" "<<t3.seconds;
}