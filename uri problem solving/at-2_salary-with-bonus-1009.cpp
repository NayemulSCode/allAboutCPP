#include<bits/stdc++.h>
using namespace std;
int main()
{
    char N[100];
    cin>>N;
    double s,sv,t;
    cin>>s>>sv;
    t=s+(sv*15)/100;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<t<<endl;
}
