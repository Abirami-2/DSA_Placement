#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int number;
    cin>>number;

    for(int i=0;i<=100;i++){
        if(i==3){
            continue;
        }
        if(i==number){
            break;
        }
        cout<<i<<endl;

    }
    return 0;
}