#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
  
    int count=0;
    while((n-1)%11!=0){
      n= n*2;
      count++;
    }
    cout<<count<<" "<<n;
}