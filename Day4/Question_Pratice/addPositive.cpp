#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int sum = 0;
    int pn;
    cout<<"Enter an Positive Integer: ";
    cin>>pn;

    while(pn >= 0){
        sum = sum + pn;
        cout<<"Enter an Positive Integer: ";
        cin>>pn;
    }

    cout<<"The sum is: "<<sum<<endl;
    return 0;
}