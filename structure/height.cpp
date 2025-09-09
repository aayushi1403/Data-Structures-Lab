#include<iostream>
#include<vector>
using namespace std;
struct height{
  int feet;
  int inches;
};
int main(){
  struct height h1={6,4};
  struct height h2={12,9};
  struct height h3;
  h3.inches=h1.inches+h2.inches;
  h3.feet=h1.feet+h2.feet+h3.inches/12;
  h3.inches=h3.inches%12;
  cout<<h3.feet<<" "<<h3.inches;
}