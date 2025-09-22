#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  int missing;
  cout<<"enter the number of elements:";
  cin>>n;
  vector<int>a(n);
  cout<<"enter the elements";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(auto j:a){
    cout<<j<<" ";
  }
}