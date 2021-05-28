#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int savings;
    cin>>savings;
    if(savings>5000){
        if(savings>10000){
            cout<<"Roadtrip with Neha"<<endl;
        }else{
            cout<<"Shopping with Neha"<<endl;
        }
    }else if(savings>2000) {
        cout<<"Date with Rashmi"<<endl;
    }else {
        cout<<"Go with Friends"<<endl;
    }
    return 0;
}