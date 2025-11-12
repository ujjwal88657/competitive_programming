#include <bits/stdc++.h>
using namespace std;


int main() {
    int max=INT_MIN;
    int a[1001]={0};
    int n;
    cin>>n;
    int s = 2 * n;
    int b[s];
   
    for(int i=0;i<s;i++){
       cin>>b[i];
       a[b[i]]++;
    }
    int pointer;
    for(int i=0;i<1001;i++){
        if(a[i]>max){max=a[i];
         pointer =i;}
        
    }
    vector<int>c;
    c.push_back(pointer);
    a[pointer]=-1;
    for(int i=0;i<1001;i++){
        if(a[i]==max)c.push_back(i);
    }
    for(auto x:c)cout<<x<<endl;


    
    return 0;
}