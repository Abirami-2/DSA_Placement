#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int number;
    cin>>number;

    int sum=0;
    for(int counter=1;counter<=number;counter++){
        sum=sum+counter;   
    }
    cout<<sum<<endl;
    return 0;
}