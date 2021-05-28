// We need to find the maximum numbers from the given numbers.
#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    // Three numbers are 4, 2, 7 --> max number is 7
    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"Number "<<a<<" is greater"<<endl;
        }else{
            cout<<"Number "<<c<<" is greater"<<endl;
        }
    }else if(b>a){
        if(b>c){
            cout<<"Number "<<b<<" is greater"<<endl;
        }else{
            cout<<"Number "<<c<<" is greater"<<endl;
        }
    }
    
    return 0;
}