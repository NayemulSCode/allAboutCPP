
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X;
    double Y, distance,KmPerLiter;
    cin>>X>>Y;
    KmPerLiter = X/Y;
    distance = (KmPerLiter/100)*100;
    cout<<fixed<<setprecision(3)<<distance<<" km/l"<<endl;
    return 0;
}
