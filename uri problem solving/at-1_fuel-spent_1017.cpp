#include<bits/stdc++.h>
using namespace std;
int main()
{
    int timeInHours, avgSpeedKm;
    double distance;
    cin>>timeInHours>>avgSpeedKm;
    distance = (timeInHours*avgSpeedKm)/12.0;
    cout<<fixed<<setprecision(3)<<distance<<endl;
    return 0;
}
