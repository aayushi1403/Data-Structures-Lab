#include<iostream>
#include<vector>
using namespace std;
struct distance{
  int kilometer;
  int meter;
};
int main(){
  struct distance d1={6,400};
  struct distance d2={12,900};
  struct distance d3;
  d3.meter=d1.meter+d2.meter;
  d3.kilometer=d1.kilometer+d2.kilometer+d3.meter/1000;
  d3.meter=d3.meter%1000;
  cout<<d3.kilometer<<" "<<d3.meter;
}