#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, s, a, l;
    cin >> r >> s >> a;
   
    if (a> (r*s))
    {
        cout <<r*s<<" "<< a- (r*s);
    }
    else
    {
        cout <<a<<" "<<0;
    }

    return 0;
}
