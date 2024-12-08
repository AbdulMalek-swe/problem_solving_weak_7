#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=0;i<n;i++){
      cin>>v[i];
    }
    bool isTrue = false;
    for(int i=0;i<(1<<n);i++){
      int sum =0;
      for(int k=0;k<n;k++){
         if((i>>k)&1){
           sum+=v[k];
         }else{
          sum-=v[k];
         }
         
      }
      
      if(sum%360==0){
        cout<<"YES"<<endl;
        isTrue = true;
        break;
      }
      
   
    }
    if(!isTrue){
      cout<<"NO"<<endl;
    }
    return 0;
}