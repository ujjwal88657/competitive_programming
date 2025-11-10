#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    int a[n];
    int b[q];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<q;i++){
        cin>>b[i];

    }
    for(int i=0;i<q;i++){
        cout<<a[b[i]-1]<<endl;
    }
    return 0;

}