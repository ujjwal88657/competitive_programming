#include<bits/stdc++.h>
using namespace std;

int main(){
   int n,d;
   cin>>n>>d;
   if(n%d==0){
    cout<<n/d;
   }
   else{
    cout<<n/d<<" "<<(n%d)<<"/"<<d;
   }

    return 0;

}