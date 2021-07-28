
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,x1,x2;
    cin>>a>>b>>c;
    d = (pow(b,2)-(4*a*c));
    x1= (-b+sqrt(d))/(2*a);
    x2 = (-b-sqrt(d))/(2*a);
    if(a !=0 && d>0){
        cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<endl;
        cout<<fixed<<setprecision(5)<<"R2 = "<<x2<<endl;
    }
    else{
        cout<<"Impossivel calcular"<<endl;
    }
    return 0;
}
