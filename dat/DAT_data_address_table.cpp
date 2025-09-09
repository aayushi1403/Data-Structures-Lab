#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  int missing;
  cout<<"enter the number of elements:";
  cin>>n;
  vector<int>a(n);
  cout<<"enter the elements";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  vector<int>m(n+1,0);
  for(int i=0;i<n;i++){
    m[a[i]]=1;
  }
  for(int j=0;j<(n+1);j++){
    if(m[j]==0){
    missing=j;
    }
  }
  cout<<"the missing number is:"<<missing;
  return 0;
}