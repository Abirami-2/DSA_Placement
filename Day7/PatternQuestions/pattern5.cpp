// A half pyramid with Numbers
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
