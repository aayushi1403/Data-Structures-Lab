#include<iostream>
#include<vector>
using namespace std;
struct complex{
  int real;
  int imaginary;
};
int main(){
  struct complex c1={2,2};
  struct complex c2={2,2};
  struct complex c3;
  struct complex c4;
  c3.real=c2.real+c1.real;
  c3.imaginary=c2.imaginary+c1.imaginary;
  cout<<c3.real<<" "<<"+j"<<c3.imaginary<<endl;
  c4.real=c2.real*c1.real-(c2.imaginary*c1.imaginary);
  c4.imaginary=c2.real*c1.imaginary+c2.imaginary*c1.real;
  cout<<c4.real<<" "<<"+j"<<c4.imaginary;
}