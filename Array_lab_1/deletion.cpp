#include<iostream>
using namespace std;
int deletion(int n,int pos,int arr[]){
int x=arr[pos];
for(int i=pos+1;i<n;i++){
  arr[i-1]=arr[i];
}
n=n-1;
return x;
}
int main(){
  int n,pos;
  cout<<"enter the number of elements:";
  cin>>n;
  int arr[n];
  cout<<"enter the elements of array:";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"enter the position of elements you want to delete:";
  cin>>pos;
  int i=0;
  deletion(n,pos,arr);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}