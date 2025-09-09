#include<iostream>
#include<vector>
using namespace std;
/**********************MERGING**************************** */
void merge(vector<int>&a,vector<int>&b,int m,int n,vector<int>&c)
{
  int i=0;
  int j=0;
  while(i<m&&j<n){
    if(a[i]<b[j]){
      c.push_back(a[i]);
      i=i+1;
    }
    else{
      c.push_back(b[j]);
      j=j+1;
    }
  }
  while(i<m){
    c.push_back(a[i]);      
    i=i+1;
  }
  while(j<n){
c.push_back(b[j]);     
 j=j+1;
  }
  
}
/**************************UNION***************************************** */
void union_of_sets(vector<int>&a,vector<int>&b,int m,int n,vector<int>&c)
{
  int i=0;
  int j=0;
  while(i<m&&j<n){
    if(a[i]<b[j]){
      c.push_back(a[i]);
      i=i+1;
    }
    else if(a[i]>b[j]){
      c.push_back(b[j]);
      j=j+1;
    }
    else{
      c.push_back(a[i]);
      i=i+1;
      j=j+1;
    }

  }
  while(i<m){
    c.push_back(a[i]);      
    i=i+1;
  }
  while(j<n){
    c.push_back(b[j]);     
    j=j+1;
  }
  
}

/****************************INTERSECTION****************************************/ 
void intersection_of_sets(vector<int>&a,vector<int>&b,int m,int n,vector<int>&c)
{
  int i=0;
  int j=0;
  while(i<m&&j<n){
    if(a[i]<b[j]){
      i=i+1;
    }
    else if(a[i]>b[j]){
      j=j+1;
    }
    else{
      c.push_back(a[i]);
      i=i+1;
      j=j+1;
    }

  }
  
}
/****************************difference****************************************/  
void difference_of_sets(vector<int>&a,vector<int>&b,int m,int n,vector<int>&c) //a-b
{
  int i=0;
  int j=0;
  while(i<m&&j<n){
    if(a[i]<b[j]){
      c.push_back(a[i]);
      i=i+1;
    }
    else if(a[i]>b[j]){
      j=j+1;
    }
    else{
      i=i+1;
      j=j+1;
    }

  }
  while(i<m){
    c.push_back(a[i]);      
    i=i+1;
  }
  
}

/****************************asymmetric difference****************************************/  
void asymmetric_difference_of_sets(vector<int>&a,vector<int>&b,int m,int n,vector<int>&c)
{
  int i=0;
  int j=0;
  while(i<m&&j<n){
    if(a[i]<b[j]){
      c.push_back(a[i]);
      i=i+1;
    }
    else if(a[i]>b[j]){
      c.push_back(b[j]);
      j=j+1;
    }
    else{
      i=i+1;
      j=j+1;
    }

  }
  while(i<m){
    c.push_back(a[i]);      
    i=i+1;
  }
  while(j<n){
    c.push_back(b[j]);     
    j=j+1;
  }
  
}

int main(){
  int m;
  int n;
  vector<int>c;
  cout<<"enter size of first array:";
  cin>>m;
 vector<int>a(m);
  cout<<"enter elements of first array:";
  for (int i=0;i<a.size();i++){
  cin>>a[i];
  }
  cout<<"enter size of second array:";
  cin>>n;
  vector<int>b(n);
  cout<<"enter elements of second array:";
  for (int j=0;j<b.size();j++)
  {
  cin>>b[j];
  }

  // merge(a,b,m,n,c);
  // for(int x:c){
  //   cout<<x<<" ";
  // }

  // union_of_sets(a,b,m,n,c);
  // for(int x:c){
  //   cout<<x<<" ";
  // }

  // intersection_of_sets(a,b,m,n,c);
  // for(int x:c){
  //   cout<<x<<" ";
  // }

  // difference_of_sets(a,b,m,n,c);
  // for(int x:c){
  //   cout<<x<<" ";
  // }

  asymmetric_difference_of_sets(a,b,m,n,c);
  for(int x:c){
    cout<<x<<" ";
  }

  return 0;
}
