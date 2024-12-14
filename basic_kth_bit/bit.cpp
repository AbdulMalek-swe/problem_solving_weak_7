#include <bits/stdc++.h>
using namespace std;
int check_bit_on_off(int n,int pos){
    return (n>>pos)&1;
}
void show_on_off_bit(int n){
     for(int i=32;i>=0;i--){
        if(check_bit_on_off(n,i)){
            cout<<"1 ";
        }else{
            cout<<"0 ";
        }
     }
}
int convert_bit_off_to_on(int n,int pos){
    return n|(1<<pos);
}
int off_bits(int n,int pos){
  return (n&(~(1<<pos)));
}
int toggle_bits(int n,int pos){
  return n^(1<<pos);
}
int main()
{
     int k,n;
     cin>>n>>k;
    
     cout<<check_bit_on_off(n,k)<<endl;
     show_on_off_bit(n);
     cout<<endl;
     cout<<convert_bit_off_to_on(n,k)<<endl;
     cout<<off_bits(n,k)<<endl;
     cout<<toggle_bits(n,k);
     return 0;
}
