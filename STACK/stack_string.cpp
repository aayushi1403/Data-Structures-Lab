#include<iostream>
#include<string>
#include<cstdlib> // Required for exit()

#define StackSize 10
using namespace std;
struct stack{
  char item[StackSize];
  int top;
};
struct stack s;
/*************************************************************************************/
void initialize(){
  s.top=-1;
}
/******************************************************************************/
bool isEmpty(){
  if(s.top==-1){
    return true;
  }
  else{return false;}
}
/****************************************************************/
char push(char x){
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
/***********************************************************************************/
char pop(){
  if(isEmpty()){
    cout<<"stack underflows";
    exit(1);
  }
  else{
    char x=s.item[s.top];
    s.top--;
    return x;
  }
}
/**********************************************************************************/
char StackTop(){
  return s.item[s.top];
}
/**********************************************************************************/
void BalancedParenthesis(string exp){
  initialize();
  int flag=0;
  for(int i=0;i<exp.length();i++){
    if(exp[i]=='('){
      push(exp[i]);
    }
    else{
      if(!isEmpty()){
        pop();
      }
      else{
          flag=1;
          break;
      }
    }
  }
  if(isEmpty()){
    if(flag==1){
      cout<<"unbalanced expression";
    }
    else{
      cout<<"balanced expression";
    }
  }
  else{
    cout<<"unbalanced expression";
  }

}
/**********************************************************************************/
void BalancedBracketParenthesis(string exp){
  initialize();
  int flag=0;
  for(int i=0;i<exp.length();i++){
    if(exp[i]=='{'){
      push(exp[i]);
    }
    else{
      if(!isEmpty()){
        pop();
      }
      else{
          flag=1;
          break;
      }
    }
  }
  if(isEmpty()){
    if(flag==1){
      cout<<"unbalanced expression";
    }
    else{
      cout<<"balanced expression";
    }
  }
  else{
    cout<<"unbalanced expression";
  }

}
/**********************************************************************************/
void palindrome(string str){
  initialize();
  for(int i=0;i<str.length();i++){
    push(str[i]);
  }
  int i=0;
  while(!isEmpty()){
    if(StackTop()==str[i]){
      pop();
      i++;
    }
    else{
      break;
    }
  }
  if(isEmpty()){
      cout<<"palindrome";
    }
    else{
      cout<<"not palindrome";
    }
}
/**********************************************************************************/
string stringReverse(string str){
  initialize();
  for(int i=0;i<str.length();i++){
    push(str[i]);
  }
  int i=0;
  while(!isEmpty()){
    char x=pop();
    str[i]=x;
    i++;
  }
  return str;
}
int main(){
     initialize();
    //  string exp;
    //  cout<<"enter the set of parenthesis:";
    //  cin>>exp;
    //  BalancedParenthesis(exp);


    // string exp;
    //  cout<<"enter the set of bracketed parenthesis:";
    //  cin>>exp;
    //  BalancedBracketParenthesis(exp);

    //  string exp;
    //  cout<<"enter the string:";
    //  cin>>exp;
    //  palindrome(exp);
        


      string exp;
     cout<<"enter the string:";
     cin>>exp;
     cout<<"the reversed string is:"<<endl;
     cout<<stringReverse(exp);

     return 0;
}