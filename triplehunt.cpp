#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int n;
    cin>>n;
    int a[n];
    vector<int>k;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=0;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]%3==0){
           count++;
          k.push_back(i);
           
        }
    }
    if(count==0){
        cout << "Nothing here!";
    }
    else
    {
        cout << count << endl;
    }

    
    int s=k.size();
    for(int i=0;i<s;i++){
        cout<<k[i]+1<<" ";
    }
}