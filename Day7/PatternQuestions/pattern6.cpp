// Floyd's Tringle - Number Pyramid that goes incrementing till the specified row
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int n;
    cin>>n;

    int count = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}