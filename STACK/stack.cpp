#include<iostream>
#include<string>
#define StackSize 10
using namespace std;
struct stack{
  int item[StackSize];
  int top;
};
struct stack s;
/**************************************/
void initialize(){
  s.top=-1;
}
/**************************************/
bool isEmpty(){
  if(s.top==-1){
    return true;
  }
  else{return false;}
}
/**************************************/
int push(int x){
  if(s.top==StackSize-1){
    cout<<"stack overflows";
    exit(1);
  }
  else{
    s.top++;
    s.item[s.top]=x;
    return x;
  }
}
/**************************************/
int pop(){
  if(isEmpty()){
    cout<<"stack underflows";
    exit(1);
  }
  else{
    int x=s.item[s.top];
    s.top--;
    return x;
  }
}
/**************************************/

void DecimalToBinary(int n){
  initialize();
 while(n!=0){
  int r=n%2;
  push(r);
  n=n/2;
 }
 while(!isEmpty()){
  int x=pop();
  cout<<x;
 }
 cout<<endl;
}
/**************************************/
void DecimalToOctal(int n){
  initialize();
 while(n!=0){
  int r=n%8;
  push(r);
  n=n/8;
 }
 while(!isEmpty()){
  int x=pop();
  cout<<x;
 }
 cout<<endl;
}
/**************************************/
void DecimalToHexadecimal(int n){
  char dat[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  initialize();
 while(n!=0){
  int r=n%16;
  push(r);
  n=n/16;
 }
 while(!isEmpty()){
  int x=pop();
  cout<<dat[x];
 }
 cout<<endl;
}
/************************/
void DecimalToAnyBase(int n,int b){
  char dat[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
  initialize();
 while(n!=0){
  int r=n%b;
  push(r);
  n=n/b;
 }
 while(!isEmpty()){
  int x=pop();
  cout<<dat[x];
 }
 cout<<endl;
}
/**************************************/

int StackTop(){
  return s.item[s.top];
}
int main(){
     initialize();






    //  int n;
    //  cout<<"enter a number";
    //  cin>>n;
    //  DecimalToBinary(n);
    //  DecimalToOctal(n);
    //  DecimalToHexadecimal(n);
    //  DecimalToAnyBase(n,2);
    //  DecimalToAnyBase(n,8);
    //  DecimalToAnyBase(n,16);







    //  cout<<push(100)<<endl;
    //  cout<<push(200)<<endl;
    //  cout<<push(300)<<endl;
    //  cout<<push(400)<<endl;
    //  cout<<push(500)<<endl;
    //  cout<<push(600)<<endl;
    //  cout<<push(700)<<endl;
    //  cout<<push(800)<<endl;
    //  cout<<push(900)<<endl;
    //  cout<<push(1000)<<endl;
    //  cout<<push(1100)<<endl;
    //  pop();
    //  pop();
    //  pop();
    //  pop();
    //  pop();
    //  pop();

}